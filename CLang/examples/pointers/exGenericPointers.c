#include<stdio.h>

int main() {
  
  /*  Pointers Examples */
  void *pp;
  int *p1, p2=10;
  p1 = &p2;
  printf("Endereço da variável p2 (&p2) : %p \n",&p2);

  pp = &p2;
  printf("Endereço de pp (pp = &p2): %p \n",pp);

  pp = &p1;
  printf("Endereço de pp (pp = &p1): %p \n",pp);

  pp = p1;
  printf("Endereço de pp (pp = p1): %p \n",pp);

  //Acsses Generic Pointers

  printf("Conteúdo com ponteiro genérico: %d \n",*(int*)pp);

  return 0;
}
