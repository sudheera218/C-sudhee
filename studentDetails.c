#include <stdio.h>

// Define structure
struct Student {
    char name[64];
    int age;
    char id[10];
};

int main() {
    // Direct initialization without strcpy()
    struct Student s1 = { "Vasanthi", 18, "ABC123456" };

    // Print values
    printf("Student s1 name is = %s\n", s1.name);
    printf("Student s1 age is = %d\n", s1.age);
    printf("Student s1 id is = %s\n", s1.id);

    return 0;
}
