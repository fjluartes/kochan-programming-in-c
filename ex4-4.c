// Exercise 4.4: Temperature conversion
#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("Temperature in Celsius is: %f\n", c);
    return 0;
}
