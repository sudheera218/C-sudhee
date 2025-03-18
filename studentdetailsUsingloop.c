#include <stdio.h>

// Define structure for Student
struct Student {
    char name[20];  
    int age;
    char id[10];
};

int main() {
    struct Student students[3];  // Array to store 3 students

    // Input loop
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", students[i].name); 

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter ID: ");
        scanf("%s", students[i].id); 
    }

    // Output loop
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("ID: %s\n", students[i].id);
    }

    return 0;
}
