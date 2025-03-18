#include <stdio.h> 

// Display Size of the Different Data Type

int main() {
    // Use sizeof operator to determine sizes of data types
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    return 0;
}
