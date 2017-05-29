// Exercise 8.2a: new version of triangularNumber
#include <stdio.h>

int calculateTriangularNumber(int n) {
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i)
    triangularNumber += i;

  return triangularNumber;
}

int main() {
  int calculateTriangularNumber(int n);
  
  printf("Triangular number 10 is %i\n", calculateTriangularNumber(10));
  printf("Triangular number 20 is %i\n", calculateTriangularNumber(20));
  printf("Triangular number 50 is %i\n", calculateTriangularNumber(50));
  
  return 0;
}
