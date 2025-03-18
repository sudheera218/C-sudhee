#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;

    // Open a file in read mode
    fptr = fopen("/Users/sudheeraambavaram/Documents/C_practice/Jon.txt", "r");

    if (fptr == NULL) {
        printf("Could not open file.\n");
        return 1;  // Exit if file does not exist
    }

    // Read each character until EOF
    while ((ch = fgetc(fptr)) != EOF) {
        charCount++;  // Count characters

        // Check if it is a newline
        if (ch == '\n') {
            lineCount++;  // Increase line count
        }

        // Check if it is a space or newline (word separator)
        if (ch == ' ' || ch == '\n') {
            wordCount++;  // Increase word count
        }
    }

    // Close the file
    fclose(fptr);

    // Print counts
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
