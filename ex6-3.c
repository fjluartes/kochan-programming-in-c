// Exercise 6.3: Dividing two integers
#include <stdio.h>

int main() {
    int num1, num2;
    float ans = 0.0;
    printf("Enter two numbers: \n");
    scanf("%i%i", &num1, &num2);
    if(num2 != 0) {
        ans = (float) num1 / (float) num2;
        printf("%i divided by %i is %.3f\n", num1, num2, ans);
    } else {
        printf("Division by zero\n");
    }
    return 0;
}
