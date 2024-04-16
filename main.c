#include <stdio.h>

int main() {
  int row, col, i, j;
  scanf("%d %d", &row, &col);
  int array1[col][row], array2[row][col];
  for (i=0;i<row;i++)
  {
      for (j=0;j<col;j++)
      {
          scanf("%d",&array1[j][i]);
      }
  }
  for (i=0;i<row;i++)
  {
      for (j=0;j<col;j++)
      {
          array2[i][j] = array1[j][i];
      }
  }
  for (i=0;i<col;i++)
  {
      for (j=0;j<row;j++)
        printf("%d ", array2[j][i]);
      printf("\n");
  }
}
