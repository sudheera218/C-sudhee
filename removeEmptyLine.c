#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_PATH "/Users/sudheeraambavaram/Documents/C_practice/Jon.txt"
#define TEMP_PATH "/Users/sudheeraambavaram/Documents/C_practice/temp.txt"

int main() {
    FILE *inputFile, *tempFile;
    char buffer[1000];

    // Open the input file in read mode
    inputFile = fopen(FILE_PATH, "r");
    // Open a temporary file in write mode
    tempFile = fopen(TEMP_PATH, "w");

    // Check if files opened successfully
    if (inputFile == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file line by line
    while (fgets(buffer, sizeof(buffer), inputFile)) {
        // If the line is not empty, write it to the temp file
        if (strlen(buffer) > 1) {  // Ignore completely empty lines
            fputs(buffer, tempFile);
        }
    }

    // Close both files
    fclose(inputFile);
    fclose(tempFile);

    // Remove original file and rename temp file as the original
    remove(FILE_PATH);
    rename(TEMP_PATH, FILE_PATH);

    printf("Empty lines removed successfully.\n");
    return 0;
}
