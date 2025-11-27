// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i;
    int flag = 0;  // 0 means prime, 1 means not prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1;  // 0 and 1 are not prime
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;  // Not prime
                break;
            }
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}