#include <stdio.h> // For standard input/output functions
#define PI 3.14159  // Defining the value of PI as a constant

// Area and Circumference of a Circle
int main() {
    float radius, area, circumference;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Algorithm:
    // 1. Read the radius as input from the user.
    // 2. Calculate the area using the formula: Area = PI * radius^2.
    // 3. Calculate the circumference using the formula: Circumference = 2 * PI * radius.
    // 4. Display the calculated area and circumference.

    // Calculate the area
    area = PI * radius * radius;

    // Calculate the circumference
    circumference = 2 * PI * radius;

    // results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}