#include <stdio.h>

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads string without spaces

    // Get character input
    printf("Enter a character to find: ");
    scanf(" %c", &ch);  // Space before %c to handle previous newline

    // Loop through the string to find the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("First occurrence of '%c' is at position %d\n", ch, i + 1);
            return 0;
        }
    }

    // If character is not found
    printf("Character '%c' not found.\n", ch);

    return 0;
}
