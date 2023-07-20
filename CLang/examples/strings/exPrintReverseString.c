#include<stdio.h>
#include<string.h>

int main() {
  char str[20] = "Linguagem C";
  int i;
  for(i=strlen(str)-1;i>=0;i--) {
    printf("%c",str[i]);
  }
  return 0;
}
