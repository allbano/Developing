#include<stdio.h>
#include<stdlib.h>

int main() {
  char word[20] = "Teste";
  printf("Palavra: %s\n",word);
  word[0] = 'L';
  printf("Palavra: %s\n",word);

  return 0;
}
