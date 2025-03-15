#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a file
void createFile(const char *filename) {
    FILE *file = fopen(filename, "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }
    printf("File '%s' created successfully.\n", filename);
    fclose(file);
}

// Function to write data to a file
void writeFile(const char *filename, const char *data) {
    FILE *file = fopen(filename, "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    fprintf(file, "%s\n", data);
    printf("Data written to '%s' successfully.\n", filename);
    fclose(file);
}

// Function to read data from a file
void readFile(const char *filename) {
    char buffer[256];
    FILE *file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    printf("Contents of '%s':\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

// Function to delete a file
void deleteFile(const char *filename) {
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } else {
        printf("Error deleting file!\n");
    }
}

// Main function with a simple menu
int main() {
    int choice;
    char filename[100], data[256];

    while (1) {
        printf("\nFile System Manager\n");
        printf("1. Create File\n");
        printf("2. Write to File\n");
        printf("3. Read File\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                printf("Enter file name: ");
                scanf("%s", filename);
                createFile(filename);
                break;
            case 2:
                printf("Enter file name: ");
                scanf("%s", filename);
                getchar(); // Consume newline
                printf("Enter data to write: ");
                fgets(data, sizeof(data), stdin);
                data[strcspn(data, "\n")] = 0; // Remove newline
                writeFile(filename, data);
                break;
            case 3:
                printf("Enter file name: ");
                scanf("%s", filename);
                readFile(filename);
                break;
            case 4:
                printf("Enter file name: ");
                scanf("%s", filename);
                deleteFile(filename);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
