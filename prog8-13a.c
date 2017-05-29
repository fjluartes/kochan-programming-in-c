// Program 8.13a: Multidimensional variable-length arrays
#include <stdio.h>

int main() {
  void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
  void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
  int sampleMatrix[3][5] = {
    {7, 16, 55, 13, 12},
    {12, 10, 52, 0, 7},
    {-2, 1, 2, 4, 9}
  };

  printf("Original matrix:\n");
  displayMatrix(3, 5, sampleMatrix);

  scalarMultiply(3, 5, sampleMatrix, 2);

  printf("Multiplied by 2:\n");
  displayMatrix(3, 5, sampleMatrix);

  scalarMultiply(3, 5, sampleMatrix, -1);

  printf("Then multiplied by -1:\n");
  displayMatrix(3, 5, sampleMatrix);

  return 0;
}

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar) {
  int row, column;

  for (row = 0; row < nRows; ++row)
    for (column = 0; column < nCols; ++column)
      matrix[row][column] *= scalar;
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]) {
  int row, column;

  for (row = 0; row < nRows; ++row) {
    for (column = 0; column < nCols; ++column)
      printf("%5i", matrix[row][column]);
    printf("\n");
  }
  printf("\n");
}
