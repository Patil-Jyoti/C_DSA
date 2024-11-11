#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transpose[3][3];
    // copiying elements from a matrix & Finding the transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];//j=i col=row-> i=j=>row=col
        }
    }
    // Printing the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);//1 2 3
        }
        printf("\n");
    }
    return 0;
}
