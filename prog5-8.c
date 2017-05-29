// Program 5.8: Reverse the digits of a number
#include <stdio.h>

int main() {
    int number, rightDigit;
    printf("Enter your number: \n");
    scanf("%i", &number);
    while(number != 0) {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number = number / 10;
    }
    printf("\n");
    return 0;
}
