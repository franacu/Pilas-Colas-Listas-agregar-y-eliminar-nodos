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
void agregarLista(Lista *lista,Nodo *nodoAI);
void eliminarLista(Lista *lista,Nodo *nodoAE);
void pushPila(Pila *pila,Nodo *nodoAI);
void popPila(Pila *pila);
void Enque(Cola *cola,Nodo *nodoAI);
void Deque(Cola *cola);
void imprimirC(Cola *cola);
void imprimirP(Pila *pila);
void imprimir(Lista *lista);


#endif //PILASCOLASDE0_HELPER_H
