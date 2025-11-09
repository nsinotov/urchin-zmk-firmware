/**
 * This file includes custom keycodes for the urkanian input symbols setting.
*/

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │ ' │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ й │ ц │ у │ к │ е │ н │ г │ ш │ щ │ з │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ ф │ і │ в │ а │ п │ р │ о │ л │ д │ ж │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ я │ ч │ с │ м │ и │ т │ ь │ б │ ю │ є │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */


/**
 * ┌─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
 * │  й  │  ц  │  у  │  к  │  е  │       │  н  │  г  │  ш  │  щ  │  з  │
 * ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
 * │  ф  │  і  │  в  │  а  │  п  │       │  р  │  о  │  л  │  д  │  ж  │
 * ├─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
 * │  я  │  ч  │  с  │  м  │  и  │       │  т  │  ь  │  б  │  ю  │   є │
 * └─────┴─────┴─────┼─────┼─────┐       ┌─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │       │     │     │
 *                   └─────┴─────┘       └─────┴─────┘
 *
 * To input all Cyrillic characters as shown, configure your PC/Laptop to use a compatible Ukrainian keyboard layout, or create a custom variant if preferred:
 * ⌥ + і -> ї
 * ⌥ + г -> ґ
 * ⌥ + п -> ґ
 * ⌥ + є -> э
 * ⌥ + ф -> э
 * ⌥ + в -> ы
 * ⌥ + а -> х
 * ⌥ + б -> ,
 * ⌥ + ю -> .
 * ⌥ + ь -> ъ
 * ⌥ + е -> ё
 */

// Aliases
#define UA_YOT  Q     // Й
#define UA_TSE  W     // Ц
#define UA_U    E     // У
#define UA_KA   R     // К
#define UA_E    T     // Е
#define UA_EN   Y     // Н
#define UA_HE   U     // Г
#define UA_SHA  I     // Ш
#define UA_SHCH O     // Щ
#define UA_ZE   P     // З
#define UA_EF   A     // Ф
#define UA_I    S     // І
#define UA_VE   D     // В
#define UA_A    F     // А
#define UA_PE   G     // П
#define UA_ER   H     // Р
#define UA_O    J     // О
#define UA_EL   K     // Л
#define UA_DE   L     // Д
#define UA_ZHE  SEMI  // Ж
#define UA_YA   Z     // Я
#define UA_CHE  X     // Ч
#define UA_ES   C     // С
#define UA_EM   V     // М
#define UA_Y    B     // И
#define UA_TE   N     // Т
#define UA_SOFT M     // Ь
#define UA_BE   COMMA // Б
#define UA_YU   DOT   // Ю
#define UA_YE   FSLH  // Є
