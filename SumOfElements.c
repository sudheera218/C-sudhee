#include <stdio.h>

// Write a program to calculate the sum of all Elements in an array.

int main() {
    int num[10]; // Array to store 10 numbers
    int sum = 0;     // Initialize sum to 0

    // Step 1: Read elements into the array
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // Step 2: Calculate the sum of the array
    for (int i = 0; i < 10; i++) {
        sum = sum + num[i];
    }

    // Step 3: Display the sum
    printf("Sum of all numbers: %d\n", sum);

    // Find largest element 
    int maximum; 
    
    for (int i = 0; i < 10; i++) {
        if (num[i] > maximum) { 
        maximum = num[i];   
    }
}

printf("The largest element is: %d\n", maximum);

    return 0;
}

