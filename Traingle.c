#include <stdio.h>

int main() {
    float a, b, c;// side a, side b, side c of a Triangle.

    // Input the sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1 (a): ");
    scanf("%f", &a);
    printf("Side 2 (b): ");
    scanf("%f", &b);
    printf("Side 3 (c): ");
    scanf("%f", &c);

    // Check if the sides form a valid triangle
    if (a + b > c && b + c > a && c + a > b) {
        // Check if all three sides are equal
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check if two sides are equal
        else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        }
        // If no sides are equal, it's a Scalene triangle
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The lengths do not form a valid triangle.\n");
    }

    return 0;
}
