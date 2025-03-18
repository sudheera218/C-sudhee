#include <stdio.h>

// Check if the character is an alphabet
int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
