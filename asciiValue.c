#include <stdio.h> 

// Print Ascii Value of the Character
int main() {
    char character; // Variable to store the input character
    int asciiValue; // Variable to store the ASCII value

    // Input the character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Algorithm:
    // 1. Read a character as input from the user.
    // 2. The ASCII value of the character is the integer representation of the character.
    // 3. Display the ASCII value.

    // Calculate the ASCII value (implicit conversion from char to int)
    asciiValue = (int) character;

    // Output the character and its ASCII value
    printf("The ASCII value of '%c' is: %d\n", character, asciiValue);

    return 0;
}
