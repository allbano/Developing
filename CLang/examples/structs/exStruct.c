#include<stdio.h>
#include<string.h>

struct person {
    char name[50], street[50];
    int age, number;
};

int main() {
    struct pessoa p;
    //Example Init
    strcpy(p.name,"Albano");
    strcpy(p.street,"Rua XV");
    p.idade = 41;
    p.number = 999;

    //Other example Init
    struct pessoa p2 = {"Fernanda","Rua Fit",31,109};

    //Example Struct Copy 
    struct pessoa p3;

    //Assignment between structs
    p3 = p;


    return 0;
}
