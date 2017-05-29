// Exercise 5.3: Triangular number (alternate)
#include <stdio.h>

int main() {
    int n, triangularNumber;
    printf("Enter n for triangular number: \n");
    scanf("%i", &n);
    triangularNumber = 0;
    printf("n		1 to n\n");
    printf("---		-------\n");
    for(int i = 1; i <= n; i++) {
        triangularNumber = ((5 * i) * ((5 * i) + 1)) / 2;
        printf("%i		 %i\n", (5 * i), triangularNumber);
    }
    return 0;
}
