// Program 6.4: Odd or even
#include <stdio.h>

int main() {
    int number, remainder;
    printf("Enter number: \n");
    scanf("%i", &number);
    remainder = number % 2;
    if(remainder == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
    return 0;
}
