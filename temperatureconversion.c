#include <stdio.h> 

// Converting Temperature Celsius into Fahrenheit

int main() {
    int celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celsius);

    // Algorithm:
    // 1. Read the temperature in Celsius from the user.
    // 2. Use the formula: Fahrenheit = (Celsius * 9/5) + 32.
    // 3. Display the calculated temperature in Fahrenheit.

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // result
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);

    return 0;
}
