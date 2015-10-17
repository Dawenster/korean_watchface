#include <pebble.h>

char month_words[4][16];

void month_in_words(int month) {
  if (month == 9) {
    strcpy(month_words[0], "Hi");
    strcpy(month_words[1], "my");
    strcpy(month_words[2], "goot");
    strcpy(month_words[3], "friend");
  }
}