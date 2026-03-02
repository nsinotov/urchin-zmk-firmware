#!/usr/bin/env bash
set -euo pipefail

DOCKER_IMAGE="zmkfirmware/zmk-build-arm:stable"
FIRMWARE_DIR="firmware"
REPO_DIR="$(cd "$(dirname "$0")" && pwd)"

# Which targets to build (default: all)
TARGET="${1:-all}"

mkdir -p "$FIRMWARE_DIR"

build_target() {
    local name="$1"
    local board="$2"
    local shield="$3"
    local snippet="${4:-}"
    local cmake_args="${5:-}"

    echo "==> Building $name ($board / $shield)"

    local snippet_arg=""
    if [ -n "$snippet" ]; then
        snippet_arg="-S $snippet"
    fi

    docker run --rm \
        -v "$REPO_DIR:/repo:ro" \
        -v "$REPO_DIR/$FIRMWARE_DIR:/output" \
        "$DOCKER_IMAGE" \
        sh -c "
            set -e
            cp -r /repo /workspace && cd /workspace
            west init -l config/
            west update
            west zephyr-export
            west build -s zmk/app -b $board -p $snippet_arg -- -DSHIELD='$shield' -DZMK_CONFIG=/workspace/config $cmake_args
            cp build/zephyr/zmk.uf2 /output/$name.uf2
        "

    echo "==> $name.uf2 ready"
}

case "$TARGET" in
    left)
        build_target "urchin_left" "nice_nano_v2" \
            "urchin_left nice_view_adapter nice_view_gem" \
            "studio-rpc-usb-uart" \
            "-DCONFIG_ZMK_STUDIO=y"
        ;;
    right)
        build_target "urchin_right" "nice_nano_v2" \
            "urchin_right nice_view_adapter nice_view_gem"
        ;;
    reset)
        build_target "settings_reset" "nice_nano_v2" \
            "settings_reset"
        ;;
    all)
        build_target "urchin_left" "nice_nano_v2" \
            "urchin_left nice_view_adapter nice_view_gem" \
            "studio-rpc-usb-uart" \
            "-DCONFIG_ZMK_STUDIO=y"
        build_target "urchin_right" "nice_nano_v2" \
            "urchin_right nice_view_adapter nice_view_gem"
        build_target "settings_reset" "nice_nano_v2" \
            "settings_reset"
        ;;
    *)
        echo "Usage: $0 [left|right|reset|all]"
        exit 1
        ;;
esac

echo ""
echo "Firmware files in $FIRMWARE_DIR/:"
ls -la "$FIRMWARE_DIR/"*.uf2 2>/dev/null || echo "  (none)"
