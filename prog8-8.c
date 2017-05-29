/* Program 8.8: Square root approximation using
 * Newton-Rhapson method */
#include <stdio.h>

float absoluteValue(float x) {
  if (x < 0)
    x = -x;

  return x;
}

float squareRoot(float x) {
  const float epsilon = 0.00001;
  float guess = 1.0;
  float absoluteValue(float x);
  
  if (x < 0) {
    printf("Negative argument to squareRoot\n");
    return -1.0;
  }

  while (absoluteValue((guess * guess) - x) >= epsilon)
    guess = ((x / guess) + guess) / 2.0;

  return guess;
}

int main() {
  printf("The square root of 2.0 is %f\n", squareRoot(2.0));
  printf("The square root of 144.0 is %f\n", squareRoot(144.0));
  printf("The square root of 17.5 is %f\n", squareRoot(17.5));
  printf("The square root of -1.0 is %f\n", squareRoot(-1.0));
  
  return 0;
}
