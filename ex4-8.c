// Exercise 4.8: Next multiple
#include <stdio.h>

int main(void) {
    int nextMultiple, i, j;
    printf("Enter i: ");
    scanf("%i", &i);
    printf("Enter j: ");
    scanf("%d", &j);
    nextMultiple = i + j - i % j;
    printf("The next multiple of %i from %i is %i.\n", j, i, nextMultiple);
    return 0;
}
