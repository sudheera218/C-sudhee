#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_PATH "/Users/sudheeraambavaram/Documents/C_practice/Jon.txt"

int main() {
    FILE *inputFile;
    char wordToFind[100], buffer[100];
    int wordCount = 0, specificWordCount = 0;

    // Open the file for reading
    inputFile = fopen(FILE_PATH, "r");

    if (inputFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Ask user for the word to find
    printf("Enter the word to find: ");
    scanf("%s", wordToFind);

    // Read the file word by word
    while (fscanf(inputFile, "%s", buffer) != EOF) {
        wordCount++; // Count total words
        if (strcmp(buffer, wordToFind) == 0) { // If word matches, increase count
            specificWordCount++;
        }
    }

    fclose(inputFile);

    // Print results
    if (specificWordCount > 0) {
        printf("The word '%s' appears %d times in the file.\n", wordToFind, specificWordCount);
    } else {
        printf("The word '%s' was not found in the file.\n", wordToFind);
    }

    return 0;
}
