Firmware for: [Urchin Keyboard](https://github.com/duckyb/urchin)

## Getting started

This is a fork of https://github.com/duckyb/urchin-zmk-firmware

**Are you trying to make your own ZMK firmware?**  
[Here are the steps you need to take.](./GETTING_STARTED.md)

[Download the firmware zip from the latest action run.](https://github.com/duckyb/zmk-urchin/actions/workflows/build.yml?query=is%3Asuccess+branch%3Amaster) Check [the ZMK docs](https://zmk.dev/docs/user-setup#installing-the-firmware) for instructions on how to flash it.


---

### KEYBOARD LAYOUT


#### LAYER 0: BASE (QWERTY)

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ A/⌥ │ S/⇧ │ D/⌃ │ F/⌘ │ G/⇪ │       │ H/⇪ │ J/⌘ │ K/⌃ │ L/⇧ │ ;/⌥ │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │  Z  │  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  /  │
          └─────┴─────┴─────┼─────┼─────┐       ┌─────┼─────┼─────┴─────┴─────┘
                            │Tab↓1│Spc↓3│       │Ent↓5│Bsp↓4│

                            └─────┴─────┘       └─────┴─────┘

Legend: ⇧=Shift, ⌃=Control, ⌥=Alt/Option, ⌘=GUI/Command, ⇪=Hyper
        ↓n = Layer tap to layer n


#### LAYER 1: SYMBOLS

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │  !  │  @  │  #  │  $  │  %  │       │  ^  │  &  │  *  │  (  │  )  │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ </⌥ │ >/⇧ │ `/⌃ │ '/⌘ │  \  │       │  -  │ =/⌘ │ ;/⌃ │ [/⇧ │ ]/⌥ │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │  ?  │  /  │  ~  │  "  │  |  │       │  _  │  +  │  :  │  {  │  }  │
          └─────┴─────┴─────┼─────┼─────┤       ├─────┼─────┼─────┴─────┴─────┘
                            │     │     │       │     │     │
                            └─────┴─────┘       └─────┴─────┘

Features:
  - Top row: Common symbols (!@#$%^&*())
  - Home row: Punctuation and brackets with mod-tap
  - Bottom row: Special characters and quotes
  - Thumb keys disabled (base layer handles them)


#### LAYER 2: EMPTY
*(Workaround for firmware bug - intentionally unused)*

#### LAYER 3: NAVIGATION & EDITING

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │     │     │CAPS │ CW  │     │       │HOME │PgDn │PgUp │ END │     │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │  ⌥  │  ⇧  │  ⌃  │  ⌘  │     │       │  ←  │  ↓  │  ↑  │  →  │     │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │     │     │ ⌘C  │ ⌘V  │     │       │     │     │     │     │     │
          └─────┴─────┴─────┼─────┼─────┤       ├─────┼─────┼─────┴─────┴─────┘
                            │     │     │       │ --- │ Del │
                            └─────┴─────┘       └─────┴─────┘

Features:
  - Caps Lock on E position, Caps Word on R position
  - Left hand: Modifier keys (Alt, Ctrl, GUI, Shift)
  - Right hand: Arrow keys and navigation (Home, End, PgUp, PgDn)
  - Copy/Paste: Cmd+C, Cmd+V (macros)
  - Right inner thumb: transparent (enables NAV+MOUSE → FUN conditional layer)

Legend: CW = Caps Word (types in UPPER_CASE until a non-word key is pressed)


#### LAYER 4: NUMBERS & FUNCTION KEYS

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │ F1  │ F2  │ F3  │ F4  │ F5  │       │ F6  │ F7  │ F8  │ F9  │ F10 │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ 1/⌥ │ 2/⇧ │ 3/⌃ │ 4/⌘ │  5  │       │  6  │ 7/⌘ │ 8/⌃ │ 9/⇧ │ 0/⌥ │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ F11 │     │     │     │     │       │     │     │     │     │ F12 │
          └─────┴─────┴─────┼─────┼─────┤       ├─────┼─────┼─────┴─────┴─────┘
                            │     │     │       │     │     │
                            └─────┴─────┘       └─────┴─────┘

Features:
  - Top row: Function keys F1-F10
  - Home row: Numbers 1-0 with mod-tap for quick access
  - F11 and F12 on bottom corners
  - Thumb keys disabled (base layer handles them)


#### LAYER 5: MOUSE — Enter hold

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │     │     │     │     │     │       │     │     │  ↑  │     │     │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │  ⌥  │  ⇧  │  ⌃  │  ⌘  │SCRL │       │     │  ←  │  ↓  │  →  │     │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │     │     │     │     │     │       │     │     │     │     │     │
          └─────┴─────┴─────┼─────┼─────┤       ├─────┼─────┼─────┴─────┴─────┘
                            │RCLK │LCLK │       │     │     │
                            └─────┴─────┘       └─────┴─────┘

Features:
  - Right hand: Mouse cursor movement (↑↓←→ via mmv keys)
  - Left hand: Modifier keys for click+drag combos
  - Thumb keys: Left/Right mouse click
  - Hold G → SCROLL layer (mouse movement becomes scroll)


#### LAYER 6: SCROLL — G hold on MOUSE layer

All keys pass through to MOUSE layer. Mouse movement keys become scroll.


#### LAYER 7: FUN (Media & System) — NAV + MOUSE held together

          ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
          │ BT0 │     │ |<< │ >>| │ >|| │       │ BT3 │     │     │Unsck│Reset│
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ BT1 │     │ Vol-│ Vol+│ Mute│       │ BT4 │     │     │     │Boot │
          ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
          │ BT2 │     │Bri- │Bri+ │     │       │ BT5 │     │     │     │BT Cl│
          └─────┴─────┴─────┼─────┼─────┤       ├─────┼─────┼─────┴─────┴─────┘
                            │     │     │       │     │     │
                            └─────┴─────┘       └─────┴─────┘

Features:
  - Conditional layer: activated when both NAV and MOUSE are held
  - Bluetooth: BT0-BT5 profile selection, BT Clear
  - Media controls: Play/Pause, Previous, Next
  - Volume: Vol+, Vol-, Mute
  - Brightness: Brightness Up/Down
  - System: Reset keyboard, Bootloader mode, Unstick modifiers

Legend: |<<, >>|, >|| = Media controls, Bri=Brightness, Vol=Volume, BT=Bluetooth

---

## Important Notes

> [!WARNING]
> **Known Firmware Bug**: Layer index 2 combined with key position 2 causes keyboard disconnection.
> This configuration includes an intentionally empty layer at index 2 as a workaround.
> The navigation layer is at index 3 instead.

### Key Repeat Feature (lt_repeat)

The thumb keys use a custom `lt_repeat` behavior that enables **key repeat on layer-tap keys**:

**How it works:**
- **Single tap** → Sends the key once (Space, Tab, Enter, or Backspace)
- **Hold** → Activates the layer (NAV, SYM, MOUSE, or NUM)
- **Quick double-tap + hold** → Key repeats continuously while held

**Technical details:**
- `tapping-term-ms: 200ms` - Time window to distinguish tap from hold
- `quick-tap-ms: 200ms` - Time window for rapid successive taps
- When you tap twice quickly within 200ms, the second tap bypasses layer activation and enables key repeat

**Example:**
- Press and hold Space → Activates Symbol layer
- Tap-tap-hold Space → Types multiple spaces (bypasses Symbol layer)
- This mimics QMK's key repeat behavior on split keyboards

---

### COMBOS

K + L  →  ESC
    (Press K and L simultaneously on the base layer to trigger Escape)

S + D  →  ESC
    (Press S and D simultaneously on the base layer to trigger Escape)


---

### MODIFIER KEY REFERENCE

Mod-Tap Keys: Hold for modifier, tap for key
  - Home row mods provide ergonomic access to Alt, Shift, Ctrl, GUI (ASCG order)
  - Left hand: A=Alt, S=Shift, D=Ctrl, F=GUI
  - Right hand: J=GUI, K=Ctrl, L=Shift, ;=Alt

Special Modifiers:
  - Hyper (⌘+⌥+⌃+⇧): G and H keys (hold on base layer)
  - Caps Lock: E position on Navigation layer (tap)
  - Caps Word: R position on Navigation layer (tap, types UPPER_CASE until non-word key)
  - Layer taps on thumb cluster for quick layer access

Timing Configuration (optimized for fast typing):
  - Tapping Term: 220ms (home row), 200ms (thumb keys with lt_repeat)
  - Quick Tap: 150ms (home row), 200ms (thumb keys for key repeat)
  - Balanced flavor with positional hold-trigger
  - Require-prior-idle: 200ms (non-shift), 125ms (shift, for eager activation)
  - Thumb keys support key repeat via lt_repeat behavior (see above)


---

### LAYER ACCESS SUMMARY

From BASE layer:
  - Hold Tab     → Layer 1 (Symbols)
  - Hold Space   → Layer 3 (Navigation)
  - Hold Enter   → Layer 5 (Mouse)
  - Hold Bksp    → Layer 4 (Numbers/F-keys)
  - Hold G on Mouse → Layer 6 (Scroll)
  - Hold Space + Enter → Layer 7 (FUN/Media — conditional)

Note: Layer 2 is intentionally empty due to firmware bug (key position 2 on 
      layer index 2 causes keyboard disconnect)


---

### 34-KEY LAYOUT NOTES

This layout uses the compact 3x5_2 format:
  - 5 keys per row (no outer columns)
  - 3 rows per half
  - 2 thumb keys per half
  - Total: 34 keys

Advantages:
  - Ultra-compact and portable
  - Minimal finger travel
  - All essential keys accessible via layers
  - Optimized for home row mods


---

### BUILD INFO

- **Keyboard**: Urchin - Split 3x5_2 (34 keys)
- **Controller**: Nice!Nano v2
- **Firmware**: ZMK (main branch, Zephyr 4.1)
- **Original repo**: https://github.com/duckyb/urchin-zmk-firmware

