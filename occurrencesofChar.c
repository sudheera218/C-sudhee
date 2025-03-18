#include <stdio.h>

// Recursive function to count occurrences of a character
int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0') 
        return 0; // Base code
        
    return (str[index] == ch) + countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    printf("Total occurrences of '%c': %d\n", ch, countOccurrences(str, ch, 0));

    return 0;
}
