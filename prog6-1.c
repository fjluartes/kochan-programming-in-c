// Program 6.1: Absolute value of an integer
#include <stdio.h>

int main() {
int number;
    printf("Enter number: \n");
    scanf("%i", & number);
    if(number < 0) {
        number = -number;
    }
    printf("The absolute value is %i\n", number);
    return 0;
}
