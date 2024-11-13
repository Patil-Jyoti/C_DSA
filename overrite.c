#include <stdio.h>

int main() {
    FILE *file = fopen("hello.java", "W");  // Open in write mode (overwrites file)
    if (file == NULL) {
        perror("Error");//error:....
       // printf("nnnnm");
        return 1;
    }
    // Write data to the file
    fprintf(file, "Thjwbjdsbdmns .\n");
    fprintf(file, "Writing to file will overwrite its contents.\n");
    // Close the file
    fclose(file);
    printf("File written successfully in write mode.\n");
    return 0;
}