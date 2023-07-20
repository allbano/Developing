#include<stdio.h>
#define pos 5

int main() {
  int i, lista[pos] = {1,2,3,4,5},soma=0;

  for(i=0;i<pos;i++)
    soma = soma + lista[i];
  printf("Soma = %d\n",soma); 

  return 0;
}
