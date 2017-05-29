// Exercise 5.4: Factorial
#include <stdio.h>

int fac(int num) {
    int result;
    if(num == 1) {
        result = 1;
    } else {
        result = num * fac(num - 1);
    }
    return result;
}

int main() {
    int n;
    printf("Enter number: \n");
    scanf("%i", &n);
    printf("n 		fac(n)\n");
    printf("--- 		----\n");
    for(int i = 1; i <= n; i++) {
        printf("%i 		%i\n", i, fac(i));
    }
    return 0;
}
