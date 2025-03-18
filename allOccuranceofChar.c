#include <stdio.h>

int main() {
    char str[100], ch;
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input character
    printf("Enter a character to find: ");
    scanf(" %c", &ch);

    // Search for occurrences
    printf("Occurrences of '%c' at positions: ", ch);
    int found = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("Not found");
    }

    printf("\n");
    return 0;
}
