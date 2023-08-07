#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

//Create Struct Ponto
typedef struct ponto Ponto;

//Create a new ponto
Ponto* pto_cria(float x, float y);
//Free ponto
void pto_libera(Ponto* p);
//Acess the values "x" and "y" of the ponto struct
void pto_acessa(Ponto* p, float* x, float* y);
//Assign the values of x and y a ponto
void pto_atribui(Ponto* p, float x, float y);
//Calculates distance between two points
float pto_distancia(Ponto* p1, Ponto* p2);

#endif
