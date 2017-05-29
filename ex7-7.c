// Exercise 7.7: Sieve of Eratosthenes
#include <stdio.h>
#include <math.h>

int main() {
  int i, j, n;

  printf("Enter n: \n");
  scanf("%i", &n);

  int P[n+1];

  for (i = 0; i <= n; ++i) {
    P[i] = i;
  }
  
  for (i = 2; i <= floor(sqrt(n)); ++i) {
    if (P[i] != 0) {
      j = i * i;
      while (j <= n) {
        P[j] = 0;
        j = j + i;
      }
    }
  }

  for (i = 2; i <= n; ++i) {
    if (P[i] != 0)
      printf("%i ", P[i]);
  }

  return 0;
}
