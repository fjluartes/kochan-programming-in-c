// Exercise 8.11: Return sum of the elements of an array using a function
#include <stdio.h>

int arraySum(int values[], int n) {
  int i, sum = 0;

  for (i = 0; i < n; ++i)
    sum += values[i];

  return sum;
}

int main() {
  int i, n;
  int arraySum(int values[], int n);

  printf("Enter n\n");
  scanf("%i", &n);
  int array[n];

  printf("Enter %i numbers\n", n);
  for (i = 0; i < n; ++i)
    scanf("%i", &array[i]);

  printf("The sum of the elements in array is %i\n", arraySum(array, n));
  
  return 0;
}
