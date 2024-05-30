//
// Created by Fran on 30/05/2024.
//

#ifndef PILASCOLASDE0_HELPER_H
#define PILASCOLASDE0_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;

typedef struct pila
{
    Nodo *tope;
}Pila;
typedef struct cola
{
    Nodo *cab;
    Nodo *cola;
}Cola;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
Pila *newPila();
Cola *newCola();

#endif //PILASCOLASDE0_HELPER_H
