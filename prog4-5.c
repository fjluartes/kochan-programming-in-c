// Program 4.5: Type conversion
#include <stdio.h>

int main () {
    float f1 = 123.123, f2;
    int i1, i2 = -150;
    char c = 'a';
    i1 = f1;
    printf("%f assigned to an int produces %i\n", f1, i1);
    f1 = i2;
    printf("%i assigned to a float produces %f\n", i2, f1);
    f1 = i2 / 100;
    printf("%i divided by 100 produces %f\n", i2, f1);
    f2 = i2 / 100.0;
    printf("%i divided by 100.0 produces %f\n");
    f2 = (float) i2 / 100;
    printf("(float) %i divided by 100 produces %f\n");
    return 0;
}
