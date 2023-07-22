#include<stdio.h>

int main() {
  
  /*  Arrays Pointers Examples */
  int vet[5] = {1,2,3,4,5};
  int *p = vet;
  int i;


  printf("Forma de acesso aos Valores no Array:\n");
  for(i=0;i<5;i++) {
    printf("Primeira forma => p[i] : %d - Segunda forma => *(p+i) : %d\n",p[i],*(p+i));
    printf("Endereço forma => &p[i] : %p - Segunda forma => (p+i) : %p\n",&p[i],(p+i));

  }
  
  return 0;
}
