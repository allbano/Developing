#include<stdio.h>
#include<string.h>

int main() {
  //Funtion strlen
  char str1[20] = "Hello World!!";
  int size = strlen(str1);
  printf("Conteúdo da String : %s\n",str1);
  printf("Caracteres Armazenados na String: %d\n",size);

  //Funtion strcpy
  char word[20] = "Linguagem C";
  char newword[30];
  strcpy(newword,word);
  printf("Conteúdo Copiado : %s\n",newword);

  //Funtion strcat
  char str2[20] = "Bom ";
  char str3[30]= "Dia";
  strcat(str2,str3);
  printf("Conteúdo Concatenado : %s\n",str2);

  //Funtion strcmp
  char word2[20] = "LINGUAGEM C";
  if(strcmp(word,word2)==0)
    printf("String Iguais!!\n");
  else
    printf("String Diferentes!!\n");


  return 0;
}
