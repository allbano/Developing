#include<stdio.h>

struct ponto {
  int x,y;
};

int main() {

  // General Form
  // sizeof( type name )
  
  //Examples
  int x= sizeof(int);
  printf("int: %d\n",sizeof(int));
  printf("char: %d\n",sizeof(char));
  printf("float: %d\n",sizeof(float));
  printf("double: %d\n",sizeof(double));
  printf("struct ponto: %d\n",sizeof(struct ponto));

  return 0;
}
