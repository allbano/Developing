#include<stdio.h>
#include<stdlib.h>

int main() {

  // Function Prototype Calloc
  // void* calloc(unsigned int num, unsigned int size);
  // All space is allocated with zeros.

  //Usability solution
  // int *v = (int*) calloc(50,sizeof(int));
  // char *c = (char*) calloc(50,sizeof(char));

  int *p;
  p = (int *) calloc(5,sizeof(int));
  if(p == NULL) {
    printf("Error: No Memory!\n");
    exit(1);
  }
  //
  int i;
  for(i=0;i<5;i++) {
    printf("Type it p[%d]: ",i);
    scanf("%d",&p[i]);
  }
  for(i=0;i<5;i++) {
    printf("Contents of array position %d: %d\n",i,*(p+i));
  }
  //Release memory
  free(p);

  return 0;
}
