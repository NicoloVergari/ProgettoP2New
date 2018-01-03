#include"listachar.h"
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

ListaChar * ListaChar::aggiungiNodo(char x, ListaChar *l){          // aggiungo il nuovo nodo all'inizio della lista
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

bool ListaChar::trova(char *a, ListaChar *l){
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


bool ListaChar::equals(ListaChar *a, ListaChar *b){
	bool t=true;
	while(a && t)
	{
		if(a->info != b->info)
			t=false;
		else{
			a=a->next;
			b=b->next;
		}
	}

	if(!a && !b)
		t=true;

	return t;
}

bool ListaChar::operator==(const ListaChar &l) const{
	return true;
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
