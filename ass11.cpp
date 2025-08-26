#include <stdio.h>
int main() {
    int num, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }
    printf("The last digit of %d is %d\n", num, lastDigit);
    return 0;
}