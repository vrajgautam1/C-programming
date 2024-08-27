#include <stdio.h>

int main() {
    int row, col, i, j, rowNum, colNum, rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &rowNum);
    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < col; j++) {
        printf("%d ", arr[rowNum][j]);
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &colNum);
    printf("Elements of column %d: ", colNum);
    for (i = 0; i < row; i++) {
        printf("%d ", arr[i][colNum]);
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
