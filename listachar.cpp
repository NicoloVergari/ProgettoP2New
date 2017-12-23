#include"listachar.h"
#include<iostream>
using namespace std;

ListaChar::ListaChar(char i, ListaChar * n) : info(i), next(n) {}

ListaChar * ListaChar::costruisci(int dim){
    if(dim){
        char x;
        cin>>x;
        return new ListaChar(x,costruisci(dim-1));
    }
    else
        return 0;
}

void ListaChar::visualNodo(ListaChar *l) const {
    cout<<l->info<<" -- ";
    cout<<l;
}

void ListaChar::visualNodoNext(ListaChar *l) const{
    cout<<l->next->info<<" -- ";
    cout<<l->next;
}

ListaChar * ListaChar::aggiungiNodo(char x, ListaChar *l){
    ListaChar *a=new ListaChar(x,l);
    return a;
}

int ListaChar::trova(char *a, ListaChar *l) const {
  if(!a)
        return 2;
    if(a)
        if(a[0]==l->info)
            return trova(a+1, l->next);
    if(a && !l)
        return 5;
    return trova(a, l->next);
}
