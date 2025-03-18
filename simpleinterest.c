#include <stdio.h> 

// Simple Interest

int main() {
    float principal, rate, time, simpleInterest;

    // Input the principal amount, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest : ");
    scanf("%f", &rate);

    printf("Enter the time : ");
    scanf("%f", &time);

    // Algorithm:
    // 1. Read the principal amount, rate of interest, and time as inputs from the user.
    // 2. Use the formula: Simple Interest = (Principal * Rate * Time) / 100.
    // 3. Display the calculated simple interest.

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // result
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
