#include "lista.h"
#include<iostream>
using namespace std;


ListaChar::ListaChar(char i='\0', ListaChar *n=0) : info(i), next(n) {}   // costruttore
/*
ListaChar::ListaChar(const ListaChar& o) {				// costruttore di copia
	info = o.info;
	next = o.next;
}*/

ListaChar * ListaChar::costruisci(int dim){
    if(dim>0){
        cout<<"inserisci un char:";
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
void ListaChar::visualizzaLista(ListaChar *l) const{
    if(l)
    {
        cout<<"Nodo: "<<l->info<<endl;
        visualizzaLista(l->next);
    }
}

ListaChar * ListaChar::unisci(ListaChar *a, ListaChar *b){
	while(a->next)
		a=a->next;
	a->next=b;
	return a;
}

bool ListaChar::trova(char *a, ListaChar *l) const{
    if(a[0]=='\0')
        return true;
    if(a && !l)
        return false;
    if(a[0]==l->info)
        return trova(a+1,l->next);
    else
        return trova(a,l->next);
}

ListaChar * ListaChar::togliNodo(ListaChar *l, char i){
	ListaChar *f=l;
	if(l->info==i){
		ListaChar *b=l;
		l=l->next;
		delete b;
		f=l;
	}

	/*while(l){
		if((l->next)==i){
			ListaChar *a=l;
			l=l->next;
			delete a;
		}
		else{
			l=l->next;
		}
	}*/
	return f;
}


bool ListaChar::equals(const ListaChar *a, const ListaChar *b){
	if(!a && !b)
		return true;
	if(!a || !b)
		return false;
	if(a->info!=b->info)
		return false;
	if(a->info==b->info)
		return equals(a->next, b->next);

}

bool ListaChar::operator==(const ListaChar &l) const{
	return equals(this,&l);
}

ListaChar * ListaChar::insRe(ListaChar *l, ListaChar *p){
	if(!l){
		p->next=0;
		return p;
	}
	l->next=insRe(l->next,p);
	return l;
}

ListaChar * ListaChar::reverse(ListaChar *l){
	if(l){
		ListaChar *s=reverse(l->next);
		ListaChar *n=insRe(s,l);
		return n;
	}
	else
		return 0;
}

