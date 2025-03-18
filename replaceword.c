#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *temp;
    char word[100], findWord[100], replaceWord[100];

    // Open the original file
    file = fopen("/Users/sudheeraambavaram/Documents/C_practice/Jon.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Open a temporary file
    temp = fopen("/Users/sudheeraambavaram/Documents/C_practice/temp.txt", "w");

    // Get the word to find and replace
    printf("Enter the word to find: ");
    scanf("%s", findWord);
    printf("Enter the replacement word: ");
    scanf("%s", replaceWord);

    // Read each word and replace if it matches
    while (fscanf(file, "%s", word) != EOF) {
        if (strcmp(word, findWord) == 0) {
            fprintf(temp, "%s ", replaceWord);  // Write replacement word
        } else {
            fprintf(temp, "%s ", word);  // Write original word
        }
    }

    // Close files and replace original file
    fclose(file);
    fclose(temp);
    remove("Jon.txt");
    rename("temp.txt", "Jon.txt");

    printf("Word replaced successfully!\n");
    return 0;
}
