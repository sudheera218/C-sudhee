#include <stdio.h>

// calculate sum of first n natural numbers
int sum(int n) {
    if (n == 0)  // Base case 
        return 0;
    return n + sum(n - 1);  // Recursive case
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d\n", n, sum(n));

    return 0;
}
