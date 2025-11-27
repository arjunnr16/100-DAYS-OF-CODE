// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        sum += temp % 10;  // Add the last digit to sum
        temp = temp / 10;  // Remove the last digit
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
