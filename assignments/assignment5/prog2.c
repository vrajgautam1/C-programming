#include <stdio.h>

int main() {
    int row, col, i, j, max;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Largest element in the array is: %d\n", max);

    return 0;
}
