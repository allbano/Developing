#include<stdio.h>

int main() {
  
  /*  Arrays Pointers Examples */
  
  int x=10;
  int *p = &x;
  //Pointer of Pointers
  int **p2 = &p;

  //Address p2
  printf("p2: %p\n",p2);
  //Address content p2 and p
  printf("*p2: %p\n",*p2);
  printf("*p: %p\n",p);

  //Address address content ( Content => x )
  printf("**p2: %d\n",**p2);
  printf("*p: %d\n",*p);


  
  return 0;
}
