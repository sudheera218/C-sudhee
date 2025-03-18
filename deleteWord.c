#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_PATH "/Users/sudheeraambavaram/Documents/C_practice/Jon.txt"
#define TEMP_PATH "/Users/sudheeraambavaram/Documents/C_practice/temp.txt"

int main() {
    FILE *inputFile, *tempFile;
    char wordToDelete[100], buffer[100];

    // Ask user for the word to delete
    printf("Enter the word to delete: ");
    scanf("%s", wordToDelete);

    // Open the original file for reading
    inputFile = fopen(FILE_PATH, "r");
    // Open a temporary file for writing
    tempFile = fopen(TEMP_PATH, "w");

    // Check if file is opened successfully
    if (inputFile == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read each word from the file
    while (fscanf(inputFile, "%s", buffer) != EOF) {
        // If the word is NOT the one to be deleted, write it to the temp file
        if (strcmp(buffer, wordToDelete) != 0) {
            fprintf(tempFile, "%s ", buffer);
        }
    }

    // Close both files
    fclose(inputFile);
    fclose(tempFile);

    // Remove the original file and rename the temp file to original
    remove(FILE_PATH);
    rename(TEMP_PATH, FILE_PATH);

    printf("Word '%s' deleted successfully from the file.\n", wordToDelete);
    return 0;
}
