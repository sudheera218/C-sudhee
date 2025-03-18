#include <stdio.h>

// Function to swap two numbers
void swap(int *p1, int *p2) {
    int temp = *p1;  // Store value of *p1 (a)
    *p1 = *p2;       // Assign value of *p2 (b) to *p1
    *p2 = temp;      // Assign stored value (temp) to *p2
}

int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call function to swap values
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
