//write a  function that prints out the first n rows of Pascal's triangle.

#include <stdio.h>

void printPascalTriangle(int n) {
  int C[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        C[i][j] = 1;
      } else {
        C[i][j] = C[i-1][j-1] + C[i-1][j];
      }
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n = 5;
  printPascalTriangle(n);
  return 0;
}
 
