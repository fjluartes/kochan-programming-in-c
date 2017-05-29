// Program 6.9: Evaluating simple expressions using switch
#include <stdio.h>

int main() {
    float num1, num2;
    char oper;
    printf("Enter your expression: \n");
    scanf("%f %c %f", &num1, &oper, &num2);
    switch(oper) {
        case '+': 
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("Division by zero.\n");
            } else {
                printf("%.2f\n", num1 / num2);
            }
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
    return 0;
}
