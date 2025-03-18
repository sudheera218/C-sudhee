#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0, inWord = 0;

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

        if ((ch == ' ' || ch == '\n') && inWord) {
             wordCount++;
             inWord = 0;
             } else if (ch != ' ' && ch != '\n') {
                 inWord = 1;
        }

    }

    // If file is not empty, count line
    if (charCount > 0 && lineCount == 0) {
        lineCount = 1;
    }

    // Close the file
    fclose(fptr);

    // Print counts
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
