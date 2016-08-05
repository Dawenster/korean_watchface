#include <pebble.h>

uint32_t wday_char_1;
uint32_t wday_char_2;
uint32_t wday_char_3;

void set_wday_chars(int wday) {
  switch (wday) {
    case 0:
      wday_char_1 = RESOURCE_ID_IL;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 1:
      wday_char_1 = RESOURCE_ID_WUL;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 2:
      wday_char_1 = RESOURCE_ID_HOA;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 3:
      wday_char_1 = RESOURCE_ID_SU;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 4:
      wday_char_1 = RESOURCE_ID_MOK;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 5:
      wday_char_1 = RESOURCE_ID_KUM;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    case 6:
      wday_char_1 = RESOURCE_ID_TO;
      wday_char_2 = RESOURCE_ID_YO;
      wday_char_3 = RESOURCE_ID_IL;
      break;

    default:
      break;
  };
}