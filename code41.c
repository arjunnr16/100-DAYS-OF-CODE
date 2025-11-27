// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  // Get last digit

    // Count number of digits
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }

    first = num / (int)pow(10, digits);  // Get first digit

    // Remove first and last digits from the middle part
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Construct new number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}