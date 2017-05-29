// Exercise 4.7: Exponential format
#include <stdio.h>

int main() {
    float x;
    x = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
    printf("x = %e\n", x);
    return 0;
}
