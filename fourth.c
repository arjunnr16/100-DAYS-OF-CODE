// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Print results
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);

    return 0;
}