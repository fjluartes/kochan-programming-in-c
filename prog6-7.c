// Program 6.7: Categorizing a single character
#include <stdio.h>

int main(void) {
    char c;
    printf("Enter a single character: \n");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("It's a letter.\n");
    } else if(c >= '0' && c <= '9') {
        printf("It's a number.\n");
    } else {
        printf("It's a special character.\n");
    }
    return 0;
}
