#include <stdio.h>

// The Greatest Number Among the Given Three Numbers
int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);

    // Find and print the greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("The greatest number is: %d\n", num3);
    }

    return 0;
}
