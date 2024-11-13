#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    printf("File created successfully.\n");
    fclose(file); // Close the file
    return 0;
}