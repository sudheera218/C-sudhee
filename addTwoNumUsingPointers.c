#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;  // Pointers for numbers

    // Assign pointers to variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);  // Store input directly using pointers

    // Perform addition using pointers
    sum = *ptr1 + *ptr2;

    // Print result
    printf("Sum: %d\n", sum);

    return 0;
}
