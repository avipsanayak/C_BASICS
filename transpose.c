//transpose
#include <stdio.h>
int main() {
  int a[3][3], t[3][3], r=3, c=3;
  printf("\nEnter matrix elements(first 9 prime numbers):\n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
}

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  }
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < c; ++j) {
    t[j][i] = a[i][j];
  }
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i){
  for (int j = 0; j < r; ++j) {
    printf("%d  ", t[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  }
  return 0;
}