#include <pebble.h>

uint32_t minute_char_1;
uint32_t minute_char_2;
uint32_t minute_char_3;
uint32_t minute_char_4;

void set_minute_chars(int minute) {
  switch (minute) {
    case 0:
      minute_char_1 = RESOURCE_ID_B_GONG;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 1:
      minute_char_1 = RESOURCE_ID_B_IL;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 2:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 3:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 4:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 5:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 6:
      minute_char_1 = RESOURCE_ID_B_YUK;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 7:
      minute_char_1 = RESOURCE_ID_B_CHIL;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 8:
      minute_char_1 = RESOURCE_ID_B_PAL;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 9:
      minute_char_1 = RESOURCE_ID_B_KU;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 10:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_BUN;
      minute_char_3 = RESOURCE_ID_BLANK;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 11:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_IL;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 12:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_YI;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 13:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_SAM;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 14:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_SA;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 15:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_O;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 16:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_YUK;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 17:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_CHIL;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 18:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_PAL;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 19:
      minute_char_1 = RESOURCE_ID_B_SHIP;
      minute_char_2 = RESOURCE_ID_B_KU;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 20:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 21:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_IL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 22:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YI;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 23:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SAM;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 24:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SA;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 25:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_O;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 26:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YUK;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 27:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_CHIL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 28:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_PAL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 29:
      minute_char_1 = RESOURCE_ID_B_YI;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_KU;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 30:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 31:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_IL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 32:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YI;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 33:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SAM;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 34:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SA;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 35:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_O;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 36:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YUK;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 37:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_CHIL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 38:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_PAL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 39:
      minute_char_1 = RESOURCE_ID_B_SAM;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_KU;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 40:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 41:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_IL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 42:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YI;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 43:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SAM;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 44:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SA;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 45:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_O;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 46:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YUK;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 47:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_CHIL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 48:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_PAL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 49:
      minute_char_1 = RESOURCE_ID_B_SA;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_KU;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 50:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_BUN;
      minute_char_4 = RESOURCE_ID_BLANK;
      break;

    case 51:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_IL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 52:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YI;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 53:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SAM;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 54:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_SA;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 55:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_O;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 56:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_YUK;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 57:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_CHIL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 58:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_PAL;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    case 59:
      minute_char_1 = RESOURCE_ID_B_O;
      minute_char_2 = RESOURCE_ID_B_SHIP;
      minute_char_3 = RESOURCE_ID_B_KU;
      minute_char_4 = RESOURCE_ID_B_BUN;
      break;

    default:
      break;
  };
}