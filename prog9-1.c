// Program 9.1: Illustrating a structure
#include <stdio.h>

int main() {
  struct date {
    int month, day, year;
  };

  struct date today;

  today.month = 5;
  today.day = 29;
  today.year = 2017;

  printf("Today's date is %i/%i/%.2i\n", today.month, today.day, today.year % 100);

  return 0;
}
