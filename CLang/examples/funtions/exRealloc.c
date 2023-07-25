#include<stdio.h>
#include<stdlib.h>
#define N0 3

int main() {

  // Function Prototype Realloc
  // void* realloc(void* ptr, unsigned int num);

  //Usability solution
  // int *v = (int*) malloc(50,sizeof(int));
  // char *c = (char*) calloc(50,sizeof(char));

  int i;
  int *p0 = (int *) malloc(N0*sizeof(int));
  if(p0 == NULL) {
    printf("Error: No Memory!\n");
    exit(1);
  }
  
  printf("Array:\n\n");
  for(i=0;i<N0;i++) {
    printf("Type it p0[%d]: ",i);
    scanf("%d",&p0[i]);
  }
  printf("\n");
  for(i=0;i<N0;i++) {
    printf("Contents of array position %d: %d\n",i,*(p0+i));
  }
  //Realloc
  printf("\nExtended Array:\n");
  int *p1 = (int *) realloc(p0,(N0*2)*sizeof(int));
  if(p1 == NULL){
    printf("Error Reallocation!\n");
    exit(1);
  }
  printf("\n");
  //Insert new positions
  for(i=N0;i<(N0*2);i++) {
    printf("Type it p1[%d] extended: ",i);
    scanf("%d",&p1[i]);
  }
  printf("\n");
  for(i=0;i<(N0*2);i++) {
    printf("Contents of extended array position %d: %d\n",i,*(p1+i));
  }




  //Release memory
  //free(p0);
  free(p1);

  return 0;
}
