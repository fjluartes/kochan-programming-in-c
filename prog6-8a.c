// Program 6.8a: Evaluating simple expressions (with division by zero)
#include <stdio.h>

int main() {
    float num1, num2;
    char oper;
    printf("Enter your expression: \n");
    scanf("%f %c %f", &num1, &oper, &num2);
    if(oper == '+') {
        printf("%.2f\n", num1 + num2);
    } else if(oper == '-') {
        printf("%.2f\n", num1 - num2);
    } else if(oper == '*') {
        printf("%.2f\n", num1 * num2);
    } else if(oper == '/') {
        if(num2 == 0) {
            printf("Division by zero.\n");
        } else {
            printf("%.2f\n", num1 / num2);
        }
    } else {
        printf("Invalid operation\n");
    } 
    return 0;
}
