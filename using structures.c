#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student s;  // Declare a structure variable

    // Input student information
    printf("Enter student's roll number: ");
    scanf("%d", &s.rollNumber);

    printf("Enter student's name: ");
    scanf(" %[^\n]", s.name);  // Reads a string with spaces

    printf("Enter student's marks: ");
    scanf("%f", &s.marks);

    // Display student information
    printf("\n--- Student Information ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

