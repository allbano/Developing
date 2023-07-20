#include<stdio.h>
#define pos 5

int main() {
  int i, lista[pos] = {3,18,2,51,45};
  int max = lista[0];

  for(i=0;i<pos;i++){
    if(max < lista[i])
      max = lista[i];
  }
  printf("Maior = %d\n",max); 

  return 0;
}
