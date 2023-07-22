#include<stdio.h>
#include<stdlib.h>

int fatorial(int n) {
    if(n == 0)
      return 1;
    else
      return n*fatorial(n-1);
}

int main() {

    //Simple call funtion
    int x = 4;
    printf("O fatorial de %d é: %d",x,fatorial(x));

  return 0;
}
