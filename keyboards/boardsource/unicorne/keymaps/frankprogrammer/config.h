// The default max layer count is 4
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// List of all possible animations:
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md#rgb-matrix-effects-idrgb-matrix-effects
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#undef RGB_MATRIX_DEFAULT_MODE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_DEFAULT_HUE 85 // Green, HSV space
#define RGB_MATRIX_DEFAULT_SPD 48 // Anim speed. 3 increments of 16
