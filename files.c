#include <stdio.h>

// Function to write to a file (overwrites existing content)
void writeToFile() {
    FILE *fptr = fopen("NIFTY 50.txt", "w"); // Open file in write mode
    if (fptr == NULL) {
        printf("Error: Could not create file.\n");
        return;
    }

    fprintf(fptr, "This is the first line in the file.\n"); // Writing to file
    fclose(fptr); // Save and close file
    printf("File created and content written successfully.\n");
}

// Function to read and display file contents
void readFromFile() {
    FILE *fptr = fopen("NIFTY 50.txt", "r"); // Open file in read mode
    if (fptr == NULL) {
        printf("Error: File not found.\n");
        return;
    }

    char text[100];
    printf("\nFile Contents:\n");
    while (fgets(text, sizeof(text), fptr)) { // Read line by line
        printf("%s", text);
    }

    fclose(fptr); // Close file
}

// Function to append content to a file using a while loop
void appendToFile() {
    FILE *fptr = fopen("NIFTY 50.txt", "a"); // Open file in append mode
    if (fptr == NULL) {
        printf("Error: Could not open file for appending.\n");
        return;
    }

    char text[100];
    printf("\nEnter text to append (type 'exit' to stop):\n");
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strncmp(text, "exit", 4) == 0)  // Stop if "exit" is entered
            break;
        fprintf(fptr, "%s", text);
    }

    fclose(fptr); // Close file
    printf("\nContent appended successfully.\n");
}

int main() {
    writeToFile();  // Step 1: Create and write to file
    appendToFile(); // Step 2: Append more content
    readFromFile(); // Step 3: Read and display file content

    return 0;
}
