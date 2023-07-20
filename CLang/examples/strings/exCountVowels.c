#include<stdio.h>
#include<string.h>

int main() {
  char str[20] = "Linguagem C";
  char vowels[20] = "aeiouAEIOU";
  int i,j,total = 0;
  int size1 = strlen(str);
  int size2 = strlen(vowels);
  for(i=0;i<size1;i++) {
    for(j=0;j<size2;j++) {
      if( str[i] == vowels[j]) {
	total++;
	break;
      }
    }
  }
  printf("Texto de contagem: %s\n",str);

  printf("Número de vogais: %d\n",total);

  return 0;
}
