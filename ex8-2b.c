// Exercise 8.2b: Use function to calculate triangular number in Program 5.5
#include <stdio.h>

int calculateTriangularNumber(int n) {
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i)
    triangularNumber += i;

  return triangularNumber;
}

int main() {
  int j, number;
  int calculateTriangularNumber(int n);

  for (j = 1; j <= 5; ++j) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    printf("Triangular number %i is %i\n\n", number, calculateTriangularNumber(number));
  }
  
  return 0;
}
