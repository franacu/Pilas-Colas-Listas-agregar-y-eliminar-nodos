//
// Created by Fran on 30/05/2024.
//
#include "stdlib.h"
#include "stdio.h"
#include "helper.h"
Nodo *newNodo(int num)
{
    Nodo *aux= malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
        {
            aux->num=num;
            aux->sig=NULL;
        }
    return aux;
}
Lista *newLista()
{
    Lista *aux= malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->cab=NULL;
    }
    return aux;
}
Pila *newPila()
{
    Pila *aux= malloc(sizeof(Pila));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->tope=NULL;
    }
    return aux;
}
Cola *newCola()
{
    Cola *aux= malloc(sizeof(Cola));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
        {
            aux->cab=NULL;
            aux->cola=NULL;
        }
    return aux;
}
void agregarLista(Lista *lista,Nodo *nodoAI)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *act=lista->cab;
            while(act->sig!=NULL)
            {
                act=act->sig;
            }
            act->sig=nodoAI;
        }
}
void eliminarLista(Lista *lista,Nodo *nodoAE)
{
    Nodo *act=lista->cab;
    Nodo *ant=NULL;
    while (act!=NULL)
    {
        if(act->num==nodoAE->num)
        {
            if(ant==NULL)
            {
                lista->cab=act->sig;
            }else
                {
                    ant->sig=act->sig;
                }
            free(act);
        }
        ant=act;
        act=act->sig;
    }
}
void pushPila(Pila *pila,Nodo *nodoAI)
{
    if(pila->tope==NULL)
    {
        pila->tope=nodoAI;
    }else
        {
            nodoAI->sig=pila->tope;
            pila->tope=nodoAI;
        }
}
void popPila(Pila *pila)
{
    if(pila->tope==NULL || pila==NULL)
    {
        printf("Pila vacia\n");
    }else
        {
            Nodo *aux=pila->tope;
            pila->tope=aux->sig;
            free(aux);
        }
}
void Enque(Cola *cola,Nodo *nodoAI)
{
    if(cola->cab==NULL)
    {
        cola->cab=nodoAI;
        cola->cola=nodoAI;
    }else
        {
            cola->cola->sig=nodoAI;
            cola->cola=nodoAI;
        }
}
void Deque(Cola *cola)
{
    if(cola->cab==NULL)
    {
        printf("Cola vacia\n");
    }else
        {
            Nodo *aux=cola->cab;
            cola->cab=aux->sig;
            free(aux);
        }
}
void imprimir(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("\nLista:\n");
    while (aux!=NULL)
    {
        printf("--%d--",aux->num);
        aux=aux->sig;
    }
}
void imprimirP(Pila *pila)
{
    Nodo *aux=pila->tope;
    printf("\nPila:\n");
    while (aux!=NULL)
    {
        printf("\nPila:\n");
        printf("--%d--",aux->num);
        aux=aux->sig;
    }
}
void imprimirC(Cola *cola)
{
    Nodo *aux=cola->cab;
    printf("\nCola:\n");
    while (aux!=NULL)
    {
        printf("--%d--",aux->num);
        aux=aux->sig;
    }
}
