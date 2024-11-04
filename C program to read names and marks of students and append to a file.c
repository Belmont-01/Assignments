#include <stdio.h>

#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    float marks;
};

int main() {
    struct Student student;
    FILE *fptr;
    int n, i;

    // Open the file for appending
    fptr = fopen("C:\\Users\\DELL\\OneDrive\\Desktop\\students.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Prompt user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read names and marks of n students
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &student.marks);

        // Append the data to the file
        fprintf(fptr, "%s\t%.2f\n", student.name, student.marks);
    }

    // Close the file
    fclose(fptr);

    printf("Data has been appended to students.txt\n");

    return 0;
}