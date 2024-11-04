#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5

// Define a structure for a Student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to write students to a file
void writeStudentsToFile(const char *filename, struct Student students[], int count) {
    FILE *fptr = fopen(filename, "wb");
    if (fptr == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(students, sizeof(struct Student), count,fptr);
    fclose(fptr);
}

// Function to read students from a file
void readStudentsFromFile(const char *filename, struct Student students[], int count) {
    FILE *fptr = fopen(filename, "rb");
    if (fptr == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }
    fread(students, sizeof(struct Student), count, fptr);
    fclose(fptr);
}

// Function to display student data
void displayStudents(struct Student students[], int count) {
    printf("ID\tName\t\tMarks\n");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];

    // Input student data
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter ID for student %d: ", i + 1);
        scanf("%d", &students[i].id);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Write students to file
    writeStudentsToFile("students.dat", students, MAX_STUDENTS);
    printf("Student data written to file.\n");

    // Read students from file
    struct Student readStudents[MAX_STUDENTS];
    readStudentsFromFile("students.dat", readStudents, MAX_STUDENTS);
    printf("Student data read from file:\n");
    displayStudents(readStudents, MAX_STUDENTS);

    return 0;
}