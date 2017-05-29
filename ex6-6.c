// Exercise 6.6: The program takes an integer, then displays the digits in order in English
#include <stdio.h>

int main() {
    int number, digit, temp, count = 0;
    printf("Enter number: \n");
    scanf("%i", &number);
    temp = number;
    do {
        digit = number % 10;
        number = number / 10;
        count++;
    } while(number != 0);   
    int A[count];
    for(int j = count - 1; j >= 0; j--) {
        digit = temp % 10;
        A[j] = digit;
        temp = temp / 10;
    }
    for(int i = 0; i < count; i++) {
        if(A[i] == 1) {
        printf("one ");
        } else if(A[i] == 2) {
            printf("two ");
        } else if(A[i] == 3) {
            printf("three ");
        } else if(A[i] == 4) {
            printf("four ");
        } else if(A[i] == 5) {
            printf("five ");
        } else if(A[i] == 6) {
            printf("six ");
        } else if(A[i] == 7) {
            printf("seven ");
        } else if(A[i] == 8) {
            printf("eight ");
        } else if(A[i] == 9) {
            printf("nine ");
        } else if(A[i] == 0) {
            printf("zero ");
        }
    }
    printf("\n");
    return 0;
}
