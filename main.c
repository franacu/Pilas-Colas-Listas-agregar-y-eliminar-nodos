
#include "helper.h"
int main()
{
    Cola *cola=newCola();
    Pila *pila=newPila();
    Lista *lista=newLista();
    agregarLista(lista,newNodo(1));
    agregarLista(lista,newNodo(2));
    agregarLista(lista,newNodo(3));
    agregarLista(lista,newNodo(4));
    imprimir(lista);
    eliminarLista(lista,newNodo(3));
    imprimir(lista);

    pushPila(pila,newNodo(1));
    pushPila(pila,newNodo(2));
    pushPila(pila,newNodo(3));
    pushPila(pila,newNodo(4));
    imprimirP(pila);
    popPila(pila);
    imprimirP(pila);

    Enque(cola,newNodo(1));
    Enque(cola,newNodo(2));
    Enque(cola,newNodo(3));
    Enque(cola,newNodo(4));
    imprimirC(cola);
    Deque(cola);
    imprimirC(cola);

    return 0;
}
