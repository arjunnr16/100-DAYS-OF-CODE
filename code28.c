// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for large products

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {  // Loop through even numbers
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}