#include <stdio.h>

// Check character type: Uppercase, Lowercase, Special Character, or Digit
int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an Uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a Lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    } else {
        printf("The character '%c' is a Special Character.\n", ch);
    }

    return 0;
}
