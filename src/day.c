#include <pebble.h>

uint32_t day_char_1;
uint32_t day_char_2;
uint32_t day_char_3;
uint32_t day_char_4;

void set_day_chars(int mday) {
  switch (mday) {
    case 1:
      day_char_1 = RESOURCE_ID_IL;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 2:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 3:
      day_char_1 = RESOURCE_ID_SAM;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 4:
      day_char_1 = RESOURCE_ID_SA;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 5:
      day_char_1 = RESOURCE_ID_O;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 6:
      day_char_1 = RESOURCE_ID_YUK;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 7:
      day_char_1 = RESOURCE_ID_CHIL;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 8:
      day_char_1 = RESOURCE_ID_PAL;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 9:
      day_char_1 = RESOURCE_ID_KU;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 10:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_BLANK;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 11:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_IL;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 12:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_YI;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 13:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_SAM;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 14:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_SA;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 15:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_O;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 16:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_YUK;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 17:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_CHIL;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 18:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_PAL;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 19:
      day_char_1 = RESOURCE_ID_SHIP;
      day_char_2 = RESOURCE_ID_KU;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 20:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 21:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 22:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_YI;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 23:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_SAM;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 24:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_SA;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 25:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_O;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 26:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_YUK;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 27:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_CHIL;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 28:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_PAL;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 29:
      day_char_1 = RESOURCE_ID_YI;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_KU;
      day_char_4 = RESOURCE_ID_IL;
      break;

    case 30:
      day_char_1 = RESOURCE_ID_SAM;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_BLANK;
      break;

    case 31:
      day_char_1 = RESOURCE_ID_SAM;
      day_char_2 = RESOURCE_ID_SHIP;
      day_char_3 = RESOURCE_ID_IL;
      day_char_4 = RESOURCE_ID_IL;
      break;

    default:
      break;
  };
}