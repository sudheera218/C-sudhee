#include <stdio.h> 
#define PI 3.14159  // Define the constant value of PI

//Area of a Circle

int main() {
    float radius, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Algorithm:
    // 1. Read the radius as input from the user.
    // 2. Use the formula: Area = PI * radius^2.
    // 3. Display the calculated area.

    // Calculate the area of the circle
    area = PI * radius * radius;

    // result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
