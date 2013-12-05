#include<stdlib.h>
#include<stdio.h>

struct nodos
{
 int dato;
 struct nodos *izq, *der;
};

typedef struct nodos node;

node *head = NULL;

void AnadirNodo(node ** n, int dato)
{
    if((*n) == NULL)
    {
        (*n) = malloc(sizeof(node));
        (*n)-> dato
       = dato
       ;
        return;
    }

    if(dato
   < (*n)->dato
   )
    {
        AnadirNodo(&(*n)->izq, dato
       );
    }
    else if (dato
   > (*n)->dato
   )
    {
        AnadirNodo(&(*n)->der, dato
       );
    }
}

void Anadir(int dato)
{
    if(head == NULL)
    {
        node *n = malloc(sizeof(node));
        n->dato
       = dato
       ;
        head = n;
    }
    else
    {
        AnadirNodo(&head, dato
       );
    }
}

void print(node **n)
{
    if((*n)->izq != NULL)
        print(&(*n)->izq);

    printf("%i ", (*n)->dato
   );

    if((*n)->der != NULL)
        print(&(*n)->der);
}

int main()
{

 Anadir(4);
 Anadir(1);
 Anadir(25);
 Anadir(14);
 Anadir(12);
 Anadir(50);
 Anadir(20);

 print(&head);
 return 0;
}
