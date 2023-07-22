#include<stdio.h>
#include<string.h>

struct person {
    char name[50];
    int age;
    char street[50];
    int number;
};

int main() {
    struct person p[4];
    struct person pn = {"Fernanda Lopes",31,"Rua Fit",109};
    p[0] = pn;

    //Example Init
    strcpy(p[2].name,"Albano");
    p[2].age = 41;
    strcpy(p[2].street,"Rua XV");
    p[2].number = 999;

    //Assignment between structs
    p[1] = p[2];
    int i;
    for(i=2; i<4; i++) {
	printf("\nDigite o nome: "); scanf(" %c%*[^\n]",&p[i].name); getchar();
	printf("Digite a idade: "); scanf("%d",&p[i].age); getchar();
	printf("Digite a Rua: "); fgets(p[i].name,50,stdin);
	printf("Digite o número: "); scanf("%d",&p[i].number); getchar();
	printf("\n");
    }

    //Prints person struct array
    for(i=0;i<4; i++) {
	printf("--------------------------------------\n");
	printf("Pessoa %d\n",i+1);
	printf("Nome: %s\n",p[i].name);
	printf("Idade: %d\n",p[i].age);
	printf("Rua/Avenida: %s\n",p[i].street);
	printf("Número: %d\n",p[i].number);
	printf("--------------------------------------");
    }

    return 0;
}
