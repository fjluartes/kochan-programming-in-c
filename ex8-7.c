// Exercise 8.7: Function to raise an integer to a positive integer power
#include <stdio.h>

long int x_to_n(int x, int n) {
  int i;
  long int ans = 1;

  for (i = 0; i < n; ++i)
    ans *= x;

  return ans;
}

int main() {
  int x, n;
  long int x_to_n(int x, int n);

  printf("Enter x: ");
  scanf("%i", &x);
  printf("Enter n: ");
  scanf("%i", &n);

  printf("%i^%i = %li\n", x, n, x_to_n(x, n));

  return 0;
}
