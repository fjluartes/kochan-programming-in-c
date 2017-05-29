// Exercise 8.3: Program 8.8 modification (epsilon as function argument)
#include <stdio.h>

float absoluteValue(float x) {
  if (x < 0)
    x = -x;

  return x;
}

float squareRoot(float x, float epsilon) {
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
  float x, epsilon;
  float absoluteValue(float x), squareRoot(float x, float epsilon);
  
  printf("Enter x: ");
  scanf("%f", &x);
  printf("Enter epsilon: ");
  scanf("%f", &epsilon);
  
  printf("The square root of %.1f is %f\n", x, squareRoot(x, epsilon));
  
  return 0;
}
