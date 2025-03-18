// Percentage of 5 Subjects
#include <stdio.h> 

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float totalMarks, percentage;

    // Input the marks for 5 subjects
    printf("Enter the marks for Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter the marks for Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter the marks for Subject 3: ");
    scanf("%d", &subject3);

    printf("Enter the marks for Subject 4: ");
    scanf("%d", &subject4);

    printf("Enter the marks for Subject 5: ");
    scanf("%d", &subject5);

    // Algorithm:
    // 1. Read marks of 5 subjects from the user.
    // 2. Calculate the total marks by summing up the marks of all 5 subjects.
    // 3. Calculate the percentage using the formula: Percentage = (Total Marks / Maximum Marks) * 100.
    //    (Maximum marks per subject is 100).
    // 4. Display the percentage.

    // Calculate total marks
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage (assuming total maximum marks = 500)
    percentage = (totalMarks / 500) * 100;

    // result
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
