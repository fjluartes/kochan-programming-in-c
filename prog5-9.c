// Program 5.9: Reverse the digits of a number using do-while
#include <stdio.h>

int main() {
    int number, rightDigit;
    printf("Enter your number: \n");
    scanf("%i", &number);
    do {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number = number / 10;
    } while(number != 0); 
    printf("\n");
    return 0;
}
