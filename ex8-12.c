// Exercise 8.12: transpose matrix
#include <stdio.h>

int main() {
  void displayMatrix(int nRow, int nCol, int matrix[nRow][nCol]);
  void transposeMatrix(int nRow, int nCol, int matrix[nRow][nCol]);
  
  int sampleMatrix[5][6] = {
    {7, 16, 55, 13, 12, 4},
    {12, 10, 52, 0, 7, -1},
    {-2, 1, 2, 4, 9, 7},
    {1, 4, -3, 2, 6, 16},
    {12, 6, 2, -5, -2, 8}
  };

  printf("Original matrix: \n");
  displayMatrix(5, 6, sampleMatrix);

  printf("Transposed matrix: \n");
  transposeMatrix(6, 5, sampleMatrix);

  return 0;
}

void displayMatrix(int nRow, int nCol, int matrix[nRow][nCol]) {
  int row, col;

  for (row = 0; row < nRow; ++row) {
    for (col = 0; col < nCol; ++col)
      printf("%5i", matrix[row][col]);
    printf("\n");
  }
  printf("\n");
}

void transposeMatrix(int nRow, int nCol, int matrix[nCol][nRow]) {
  int row, col;
  int newMatrix[nRow][nCol];
  
  for (row = 0; row < nRow; ++row) {
    for (col = 0; col < nCol; ++col) {
      newMatrix[row][col] = matrix[col][row];
      printf("%5i", newMatrix[row][col]);
    }
    printf("\n");
  }
  printf("\n");
}
