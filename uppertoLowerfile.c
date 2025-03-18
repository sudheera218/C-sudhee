#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILE_PATH "/Users/sudheeraambavaram/Documents/C_practice/Jon.txt"
#define TEMP_PATH "/Users/sudheeraambavaram/Documents/C_practice/temp.txt"

int main() {
    FILE *inputFile, *tempFile;
    char ch;

    // Open the file for reading
    inputFile = fopen(FILE_PATH, "r");
    // Open a temporary file for writing
    tempFile = fopen(TEMP_PATH, "w");

    // Check if file opened successfully
    if (inputFile == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read character by character and convert case
    while ((ch = fgetc(inputFile)) != EOF) {
        if (islower(ch)) { 
            ch = toupper(ch); // Convert to uppercase if lowercase
        } else if (isupper(ch)) {
            ch = tolower(ch); // Convert to lowercase if uppercase
        }
        fputc(ch, tempFile); // Write modified character to temp file
    }

    // Close files
    fclose(inputFile);
    fclose(tempFile);

    // Replace original file with modified file
    remove(FILE_PATH);
    rename(TEMP_PATH, FILE_PATH);

    printf("Text case conversion completed successfully.\n");
    return 0;
}
