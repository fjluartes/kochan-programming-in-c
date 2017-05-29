// Program 5.2: 200th Triangular number
#include <stdio.h>

int main() {
    int n, triangularNumber;
    triangularNumber = 0;
    for(n = 1; n <= 200; n++) 
    triangularNumber += n;
    printf("The 200th triangular number is %i\n", triangularNumber);
    return 0;
}
