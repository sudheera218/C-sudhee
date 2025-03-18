#include <stdio.h>

int main() {
    char str[100], ch;
    int lastIndex = -1;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word (no spaces)

    // Get character input
    printf("Enter a character to find: ");
    scanf(" %c", &ch);  // Space before %c handles newline issue

    // Loop through the string to find the last occurrence
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            lastIndex = i;
        }
    }

    // Check if character was found
    if (lastIndex != -1) {
        printf("Last occurrence of '%c' is at position %d\n", ch, lastIndex + 1);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
