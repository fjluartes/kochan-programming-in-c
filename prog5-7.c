// Program 5.7: Greatest Common Divisor
#include <stdio.h>

int main() {
    int u, v, temp;
    printf("Enter two non-negative integers: \n");
    scanf("%i%i", &u, &v);
    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("Their greatest common divisor is %i\n", u);
    return 0;
}
