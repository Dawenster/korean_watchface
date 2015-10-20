#include <pebble.h>

uint32_t month_char_1;
uint32_t month_char_2;
uint32_t month_char_3;

void set_month_chars(int month) {
  switch (month) {
    case 0:
      month_char_3 = RESOURCE_ID_IL;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 1:
      month_char_1 = RESOURCE_ID_YI;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 2:
      month_char_1 = RESOURCE_ID_SAM;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 3:
      month_char_1 = RESOURCE_ID_SA;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 4:
      month_char_1 = RESOURCE_ID_O;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 5:
      month_char_1 = RESOURCE_ID_YU;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 6:
      month_char_1 = RESOURCE_ID_CHIL;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 7:
      month_char_1 = RESOURCE_ID_PAL;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 8:
      month_char_1 = RESOURCE_ID_KU;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 9:
      month_char_1 = RESOURCE_ID_SI;
      month_char_2 = RESOURCE_ID_WUL;
      month_char_3 = RESOURCE_ID_BLANK;
      break;

    case 10:
      month_char_1 = RESOURCE_ID_SHIP;
      month_char_2 = RESOURCE_ID_IL;
      month_char_2 = RESOURCE_ID_WUL;
      break;

    case 11:
      month_char_1 = RESOURCE_ID_SHIP;
      month_char_2 = RESOURCE_ID_YI;
      month_char_2 = RESOURCE_ID_WUL;
      break;

    default:
      break;
  };
}