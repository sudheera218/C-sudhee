#include <stdio.h>

int main() {
    FILE *file, *temp;
    char buffer[1000];
    int lineNumber, currentLine = 1;

    // Open file in read mode
    file = fopen("/Users/sudheeraambavaram/Documents/C_practice/Jon.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Open temporary file in write mode
    temp = fopen("/Users/sudheeraambavaram/Documents/C_practice/temp.txt", "w");

    // Get line number and new content
    printf("Enter line number to replace: ");
    scanf("%d", &lineNumber);
    getchar(); // Consume newline

    printf("Enter new content: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Read each line and replace the target line
    while (fgets(buffer, sizeof(buffer), file)) {
        if (currentLine == lineNumber) {
            fputs(buffer, temp); // Write new content
        } else {
            fputs(buffer, temp); // Copy original content
        }
        currentLine++;
    }

    // Close files and replace the old file
    fclose(file);
    fclose(temp);
    remove("Jon.txt");
    rename("temp.txt", "Jon.txt");

    printf("Line replaced successfully.\n");

    return 0;
}
