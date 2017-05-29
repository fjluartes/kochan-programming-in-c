/* Program 8.14: Convert a positive integer to another base using functions
 * Global variables are used (add g with global variables e.g. gConvertedNumber)*/
#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase() {
  printf("Number to be converted? ");
  scanf("%li", &numberToConvert);

  printf("Base? ");
  scanf("%i", &base);

  if (base < 2 || base > 16) {
    printf("Bad base - must be between 2 and 16\n");
    base = 10;
  }
}

void convertNumber() {
  do {
    convertedNumber[digit] = numberToConvert % base;
    ++digit;
    numberToConvert /= base;
  } while (numberToConvert != 0);
}

void displayConvertedNumber() {
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int nextDigit;

  printf("Converted number = ");
  for (--digit; digit >= 0; --digit) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
}

int main() {
  void getNumberAndBase(), convertNumber(), displayConvertedNumber();

  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();

  return 0;
}
