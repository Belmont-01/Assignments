#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Function to write a sentence to the file
void writeToFile() {
    FILE *fptr;
    char input[MAX_LENGTH];

    // Open the file for writing
    fptr = fopen("C:\\Users\\DELL\\OneDrive\\Desktop\\data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1) ;
    }

    // Prompt user for input
    printf("Enter a sentence (up to 100 characters): ");
    fgets(input, sizeof(input), stdin); // Read a line of input

    // Write the input to the file
    fprintf(fptr, "%s", input);

    // Close the file
    fclose(fptr);
    printf("Data has been written to data.txt\n");
}

// Function to read content from the file and display it
void readFromFile() {
    FILE *fptr;
    char line[MAX_LENGTH];

    // Open the file for reading
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1) ;
    }

    // Read and display each line from the file
    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }

    // Close the file
    fclose(fptr);
}

// Function to append a sentence to the file
void appendToFile() {
    FILE *fptr;
    char input[MAX_LENGTH];

    // Open the file in append mode
    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        exit(1) ;
    }

    // Prompt user for input
    printf("Enter a second sentence to append: ");
    fgets(input, sizeof(input), stdin); // Read a line of input

    // Append the input to the file
    fprintf(fptr, "%s", input);

    // Close the file
    fclose(fptr);
    printf("Data has been appended to data.txt\n");
}

int main() {
    int choice;

    // Menu for user to choose operations
    do {
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}