#include<stdio.h>

int main(int argc, char *argv[]) {

  if(argc == 1) {
    printf("Programa %s sem paramentros.\n",argv[0]);
  } else {
    int i;
    printf("Parâmtros do programa: %s\n",argv[0]);
    for(i=1;i<argc;i++)
      printf("Parâmtro %d: %s\n",i,argv[i]);
  }



  return 0;
}
