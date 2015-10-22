#include <pebble.h>

uint32_t hour_char_1;
uint32_t hour_char_2;
uint32_t hour_char_3;

void set_hour_chars(int hour) {
  switch (hour) {
    case 0:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_DU;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 1:
      hour_char_1 = RESOURCE_ID_B_HAN;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 2:
      hour_char_1 = RESOURCE_ID_B_DU;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 3:
      hour_char_1 = RESOURCE_ID_B_SEH;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 4:
      hour_char_1 = RESOURCE_ID_B_NEH;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 5:
      hour_char_1 = RESOURCE_ID_B_DA;
      hour_char_2 = RESOURCE_ID_B_SUH;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 6:
      hour_char_1 = RESOURCE_ID_B_YEUH;
      hour_char_2 = RESOURCE_ID_B_SUH;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 7:
      hour_char_1 = RESOURCE_ID_B_IL;
      hour_char_2 = RESOURCE_ID_B_GOPE;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 8:
      hour_char_1 = RESOURCE_ID_B_YEUH;
      hour_char_2 = RESOURCE_ID_B_DUL;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 9:
      hour_char_1 = RESOURCE_ID_B_A;
      hour_char_2 = RESOURCE_ID_B_HOPE;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 10:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 11:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_HAN;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 12:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_DU;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 13:
      hour_char_1 = RESOURCE_ID_B_HAN;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 14:
      hour_char_1 = RESOURCE_ID_B_DU;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 15:
      hour_char_1 = RESOURCE_ID_B_SEH;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 16:
      hour_char_1 = RESOURCE_ID_B_NEH;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 17:
      hour_char_1 = RESOURCE_ID_B_DA;
      hour_char_2 = RESOURCE_ID_B_SUH;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 18:
      hour_char_1 = RESOURCE_ID_B_YEUH;
      hour_char_2 = RESOURCE_ID_B_SUH;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 19:
      hour_char_1 = RESOURCE_ID_B_IL;
      hour_char_2 = RESOURCE_ID_B_GOPE;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 20:
      hour_char_1 = RESOURCE_ID_B_YEUH;
      hour_char_2 = RESOURCE_ID_B_DUL;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 21:
      hour_char_1 = RESOURCE_ID_B_A;
      hour_char_2 = RESOURCE_ID_B_HOPE;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    case 22:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_SI;
      hour_char_3 = RESOURCE_ID_BLANK;
      break;

    case 23:
      hour_char_1 = RESOURCE_ID_B_YUL;
      hour_char_2 = RESOURCE_ID_B_HAN;
      hour_char_3 = RESOURCE_ID_B_SI;
      break;

    default:
      break;
  };
}