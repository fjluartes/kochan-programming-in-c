// Program 6.8: Evaluating simple expressions (number operator number)
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
        printf("%.2f\n", num1 / num2);
    } else {
        printf("Invalid operation\n");
    } 
    return 0;
}
