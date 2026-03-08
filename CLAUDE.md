# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

ZMK firmware configuration for the **Urchin** — a 3×5+2 split ergonomic keyboard (34 keys) using **Nice!Nano v2** controllers with **nice-view-gem** OLED displays. Wireless Bluetooth only.

## Build System

Two ways to build firmware:

### Local build (Docker)
Run `./build.sh` to build all targets locally using Docker (`zmkfirmware/zmk-build-arm:stable` image). Output goes to `firmware/` (gitignored).

```
./build.sh          # build all (left, right, settings_reset)
./build.sh left     # left half only
./build.sh right    # right half only
./build.sh reset    # settings_reset only
```

Requires Docker running locally.

### CI build (GitHub Actions)
Push changes to trigger a build; download artifacts from the Actions tab.

### Build details
- **Build matrix**: defined in `build.yaml` (left half, right half, settings_reset)
- **ZMK version**: main branch / Zephyr 4.1 (set in `config/west.yml`)
- **External modules**: `duckyb/urchin-zmk-module` (shield definition), `M165437/nice-view-gem` (display, pinned to `7794ebf` for LVGL v8 compatibility)

## Key Files

| File | Purpose |
|------|---------|
| `config/urchin.keymap` | Primary keymap — layers, behaviors, combos, macros |
| `config/urchin.conf` | Kconfig feature flags (BT, sleep, display settings) |
| `config/west.yml` | West manifest — ZMK version and module dependencies |
| `build.yaml` | GitHub Actions build matrix |
| `config/urchin.json` | Physical key position coordinates (for layout editors) |
| `build.sh` | Local Docker-based firmware build script |

## Keymap Architecture (`config/urchin.keymap`)

**6 layers**: BASE (0), SYM (1), EMP (2, intentionally empty), NAV (3), NUM (4), FUN (5).

Layer 2 is empty as a workaround — ZMK has a bug where layer index 2 + key position 2 causes a keyboard disconnect.

**Layer access** (all via thumb keys):
- Hold Tab → SYM | Hold Space → NAV | Hold Backspace → NUM | Hold Enter → FUN

**Home row mods** (balanced flavor, 220ms tapping-term):
- Left: A=Shift, S=Ctrl, D=Alt, F=GUI
- Right: J=GUI, K=Alt, L=Ctrl, ;=Shift

**Custom behaviors defined in the keymap**:
- `hm` — home row mod (balanced hold-tap with positional hold)
- `lt_repeat` — layer-tap that outputs key-repeat on quick double-tap (200ms tapping-term)
- `ht_paste_caps` — macro: Cmd+V on tap, Caps Lock on hold
- Hyper key (⌘+⌥+⌃+⇧) on G and H positions

**Combos**: `K+L` → ESC, `S+D` → ESC

## ZMK Conventions

- Keymap uses **Device Tree Syntax** (`.dtsi`/`.keymap` files)
- Key positions are 0-indexed, left-to-right, top-to-bottom (0–16 left, 17–33 right... but check the actual position map in the keymap)
- Behaviors are defined in `/ { behaviors { ... } }` blocks
- Layers are defined in `/ { keymap { ... } }` with `bindings = <...>` arrays
- ZMK key codes reference: https://zmk.dev/docs/codes

## Known Issues

- **Layer 2 bug**: Do not assign meaningful bindings to layer index 2 at key position 2 — causes disconnect
- **Debouncing disabled** in `urchin.conf` (intentional, for lower latency)
