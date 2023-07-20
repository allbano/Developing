#include<stdio.h>
#include<stdlib.h>

int main() {
  char str1[20] = "Hello World!!";
  char str2[20];
  int i;
  for(i=0;str1[i]!='\0';i++)
    str2[i] = str1[i];
  str2[i] = '\0';

  printf("String copiada: %s",str2);
  return 0;
}
