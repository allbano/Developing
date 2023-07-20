#include<stdio.h>
#include<string.h>

int main() {
  char string[20] = "Linguagem C Lang";
  char c;
  int i,size = strlen(string),count = strlen(string)-1;
  printf("Valor count: %d\n",count);
  for(i=0;i<(int)size/2;i++) {
    c = string[i];
    string[i] = string[count];
    string[count]=c;
    count--;
  }
  //str[i]='\0';

  printf("Resultado : %s\n",string);

  //char str[100] = {97,195,167,195,163,111};
  char str[100] = {97,195,167,195};
  printf ("%s\n", str);

  return 0;
}
