
#pragma once
#define SPLIT_USB_DETECT

// Combos
//#undef COMBO_TERM
#define COMBO_TERM 30
//#define COMBO_MUST_TAP_PER_COMBO
//#define COMBO_TERM_PER_COMBO
// All combos are specified from the base layer, saves space
#define COMBO_ONLY_FROM_LAYER 0

// Not supported without flto
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Save space
#define LAYER_STATE_8BIT
// These are a bit iffy, as I don't know what they're doing, but it "works fine" according to Discord people
// #undef LOCKING_SUPPORT_ENABLE
// #undef LOCKING_RESYNC_ENABLE
// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 20. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_MAX_SPEED 6
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

#define TAPPING_TERM 200
//#define HOLD_ON_OTHER_KEY_PRESS
//#define AUTO_SHIFT_TIMEOUT 195
//#define NO_AUTO_SHIFT_SPECIAL
//#define NO_AUTO_SHIFT_NUMERIC
// Underglow configuration
