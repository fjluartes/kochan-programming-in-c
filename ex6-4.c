// Exercise 6.4: Printing Calculator
#include <stdio.h>

int main() {
    float num, acc = 0.0;
    char oper;
    printf("Begin Calculations\n");
    scanf("%f %c", &num, &oper);
    while(oper != 'E') {
        switch(oper) {
            case 'S':
                acc = num;
                printf("= %f\n", acc);
                break;
            case '+':
                acc = acc + num;
                printf("= %f\n", acc);
                break;
            case '-':
                acc = acc - num;
                printf("= %f\n", acc);
                break;
            case '*':
                acc = acc * num;
                printf("= %f\n", acc);
                break;
            case '/':
                if(num == 0)
                    printf("Division by zero\n");
                else {
                    acc = acc / num;
                    printf("= %f\n", acc);
                }
                break;
            default:
                printf("Invalid input!\n");
                oper = 'E';
                break;
        }
        if((num < '0') || (num > '9')) {
            oper = 'E';		
        } 
        scanf("%f %c", &num, &oper);
    }
    printf("End of calculations\n");
    return 0;
} 
