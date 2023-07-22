#include<stdio.h>

enum semana{Domingo,Segunda,Terça,Quarta,Quinta,Sexta,Sábado};

int main() {

  enum semana s1,s2,s3;
  s1 = Segunda;
  s2 = Terça;
  s3 = s1 + s2;

  printf("Domingo = %d\n",Domingo);
  printf("s1 = %s\n",s1);
  printf("s2 = %d\n",s2);
  printf("s3 = %d\n",s3);



  return 0;
}
