#include <stdio.h>
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}
int main() {
    int num1;
    printf(" enter the only 3 digit number: ");
    scanf("%d", &num1);
    if (num1 < 100 || num1 > 999) {
        printf(" it is not valid enter only 3digit number\n:");
        return 1;
    }
    int reversedNumber = reverseNumber(num1);
    printf("the 3 digit number is : %d\n", reversedNumber);
    return 0;
}