// Exercise 7.3: Array of counters (modified)
#include <stdio.h>

int main() {
  int ratingCounters[11], i, response;
  for (i = 1; i <= 10; ++i)
    ratingCounters[i] = 0;
  
  i = 1;
  printf("Enter your responses\n");
  while (response != 999) {
    scanf("%i", &response);
    if ((response < 1 || response > 10) && response != 999)
      printf("Bad response: %i\n", response);
    else if (response == 999)
      break;
    else
      ++ratingCounters[response];
  }

  printf("\n\nRating    No of responses\n");
  printf("-------   ----------------\n");

  for (i = 1; i <= 10; ++i)
    printf("%4i %14i\n", i, ratingCounters[i]);

  return 0;
}
