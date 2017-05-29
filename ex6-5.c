// Exercise 6.5: Reverse the digits of a number using do-while
#include <stdio.h>

int main() {
    int number, rightDigit;
    _Bool isNegative = 0;
    char sign = '-';
    printf("Enter your number: \n");
    scanf("%i", &number);
    if(number < 0) {
        isNegative = 1;
        number = -number;
    }
    do {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number = number / 10;
    } while(number != 0); 
        if(isNegative) {
            printf("%c", sign);
        }
    }
    printf("\n");
    return 0;
}
