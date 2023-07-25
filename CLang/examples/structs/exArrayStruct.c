#include<stdio.h>
#include<string.h>

struct person {
    char name[50];
    int age;
    char street[50];
    int number;
} typedef person;

person createPerson() {
    person p,*pn=&p;
	printf("\nDigite o nome: ");
	//fgets(pn->name,50,stdin);
	scanf("%50[^\n]",&(pn->name));
	setbuf(stdin,NULL);
	printf("Digite a idade: ");
	scanf("%d",&(pn->age)); 
	setbuf(stdin,NULL);
	printf("Digite a Rua: "); 
	//fgets(pn->street,50,stdin);
	scanf("%50[^\n]",&(pn->street)); 
	setbuf(stdin,NULL);
	printf("Digite o número: "); 
	scanf("%d",&(pn->number)); 
	setbuf(stdin,NULL);
return p;
}
void printPerson(person x) {
	printf("--------------------------------------\n");
	printf("Dados da Pessoa \n");
	printf("Nome: %s\n",x.name);
	printf("Idade: %d\n",x.age);
	printf("Rua/Avenida: %s\n",x.street);
	printf("Número: %d\n",x.number);
	printf("--------------------------------------");

}

int main() {
    person ap[4];
    struct person pn = {"Fernanda Lopes",31,"Rua Fit",109};
    ap[0] = pn;

    //Example Init
    strcpy(ap[2].name,"Albano");
    ap[2].age = 41;
    strcpy(ap[2].street,"Rua XV");
    ap[2].number = 999;

    //Assignment between structs
    ap[1] = ap[2];
	
    //Create Person
    ap[2] = createPerson();
    ap[3] = createPerson();
    //Print Person
    for(int i=0;i<4;i++)
      printPerson(ap[i]);
    

    return 0;
}
