#include <stdio.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    FILE *fptr;
    int i;

    // Open the file for writing
    fptr = fopen("C:\\Users\\DELL\\OneDrive\\Desktop\\students.txt","w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read names and marks of 5 students
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Write the data to the file
    fprintf(fptr, "Name\tMarks\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        fprintf(fptr, "%s\t%.2f\n", students[i].name, students[i].marks);
    }

    // Close the file
    fclose(fptr);

    printf("Data has been written to students.txt\n");

    return 0;
}