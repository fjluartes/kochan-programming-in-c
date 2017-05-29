// Exercise 5.2: Table of integer squares
#include <stdio.h>

int main() {
    int num, numSquared;
    printf("TABLE OF INTEGER SQUARES\n");
    printf(" n 	n^2\n");
    printf("---	----\n");
    numSquared = 0;
    for(num = 1; num <= 10; num++) {
        numSquared = num * num;
        printf(" %i 	%-3i\n", num, numSquared);
    }
    return 0;
}
