#include <stdio.h> 

// Area of Triangle

int main() {
    float base, height, area;

    // Input the base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Algorithm:
    // 1. Read the base and height as input from the user.
    // 2. Use the formula: Area = (1/2) * base * height.
    // 3. Display the calculated area.

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
