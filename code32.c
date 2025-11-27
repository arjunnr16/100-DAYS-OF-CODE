// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reversed = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}