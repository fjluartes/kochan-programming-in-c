// Program 8.4: Function to calculate the nth Triangular number
#include <stdio.h>

void calculateTriangularNumber(int n) {
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i)
    triangularNumber += i;

  printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main() {
  calculateTriangularNumber(10);
  calculateTriangularNumber(20);
  calculateTriangularNumber(50);
  
  return 0;
}
