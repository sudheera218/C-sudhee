#include <stdio.h>
#include <math.h>  // For sqrt()

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input the coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    // Check if a is zero (not a quadratic equation)
    if (a == 0) {
        printf("Invalid input. 'a' cannot be zero.\n");
        return 1;
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("The root is real and repeated: %.2lf\n", root1);
    }
    else {
        // Complex roots (no real solutions)
        printf("The roots are complex.\n");
    }

    return 0;
}
