// Exercise 6.2: Divisibility of two numbers
#include <stdio.h>

int main() {
    int num1, num2, r;
    printf("Enter two numbers: \n");
    scanf("%i%i", &num1, &num2);
    if(num1 > num2) {
        r = num1 % num2;
        if(r == 0) {
            printf("%i is divisible by %i\n", num1, num2);
        } else {
            printf("%i is not divisible by %i\n", num1, num2);
        }
    } else if(num2 > num1) {
        r = num2 % num1;
        if(r == 0) {
            printf("%i is divisible by %i\n", num2, num1);
        } else {
            printf("%i is not divisible by %i\n", num2, num1);
        }
    }
    return 0;
}
