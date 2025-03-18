#include <stdio.h>
#include <stdlib.h>

#define FILE_PATH "/Users/sudheeraambavaram/Documents/C_practice/Jon.txt"
#define TEMP_PATH "/Users/sudheeraambavaram/Documents/C_practice/temp.txt"

int main() {
    FILE *inputFile, *tempFile;
    char buffer[1000];
    int lineToDelete, currentLine = 1;

    // Ask user for the line number to delete
    printf("Enter the line number to delete: ");
    scanf("%d", &lineToDelete);

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
        // If the current line is NOT the one to delete, write it to the temp file
        if (currentLine != lineToDelete) {
            fputs(buffer, tempFile);
        }
        currentLine++; // Increment line count
    }

    // Close both files
    fclose(inputFile);
    fclose(tempFile);

    // Remove original file and rename temp file as the original
    remove(FILE_PATH);
    rename(TEMP_PATH, FILE_PATH);

    printf("Line %d deleted successfully.\n", lineToDelete);
    return 0;
}
