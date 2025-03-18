#include <stdio.h>

// Recursive function to calculate N factorial
int factorial(int n) {
    if (n == 0 || n == 1) { // Base c
        return 0;
    }
    
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling recursive function
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
