
#include "helper.h"
int main()
{

    Pila *pila=newPila();
    pushPila(pila,newNodo(1));   //4-3-2-1
    pushPila(pila,newNodo(2));
    pushPila(pila,newNodo(3));
    pushPila(pila,newNodo(4));
    imprimir(pila);
    popPila(pila);

    return 0;
}
