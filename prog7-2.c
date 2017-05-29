// Program 7.2: Array of counters
#include <stdio.h>

int main() {
  int ratingCounters[11], i, response;
  for (i = 1; i <= 10; ++i)
    ratingCounters[i] = 0;
  
  printf("Enter your responses\n");
  for (i = 1; i <= 20; ++i) {
    scanf("%i", &response);
    if (response < 1 || response > 10)
      printf("Bad response: %i\n", response);
    else
      ++ratingCounters[response];
  }

  printf("\n\nRating    No of responses\n");
  printf("-------   ----------------\n");

  for (i = 1; i <= 10; ++i)
    printf("%4i %14i\n", i, ratingCounters[i]);

  return 0;
}
