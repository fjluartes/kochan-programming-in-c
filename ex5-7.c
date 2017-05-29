// Exercise 5.7: Decimal point before field width
#include <stdio.h>

int main() {
    int dollars, cents, count;
    for(count = 1; count <= 10; count++) {
        printf("Enter dollars: \n");
        scanf("%i", &dollars);
        printf("Enter cents: \n");
        scanf("%i", &cents);
        printf("$%i.%.2i\n\n", dollars, cents);
    }
    return 0;
}
