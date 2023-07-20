#include<stdio.h>
#define lin 100
#define col 50

int main() {
  int mat[lin][col];
  int i,j;
  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
      //Filling in the matrix values
      //printf(Digite mat[%d][%d]: ",i,j);
      //scanf("%d",&mat[i][j]);
      mat[i][j]=j;
	printf("%d ",mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
