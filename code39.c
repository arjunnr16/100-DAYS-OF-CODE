// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10; // Get the last digit
        if (digit % 2 != 0) {
            product *= digit;  // Multiply if odd
        }
        num = num / 10; // Remove the last digit
    }

    printf("Product of odd digits is: %d\n", product);

    return 0;
}