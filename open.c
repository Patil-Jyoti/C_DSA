#include <stdio.h>

int main() {
    FILE *file = fopen("example1.c", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fclose(file); // Close the file
    return 0;
}
