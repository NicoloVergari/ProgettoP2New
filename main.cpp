#include "lista.h"
#include<iostream>
using namespace std;


int main()
{
 cout<<"inserisci dimensione lista di char: ";
	int dim;
	cin>>dim;
	ListaChar *a=0;
	a=a->costruisci(dim);
	a->visualizzaLista(*a);

	/*cout<<"--------"<<endl;
	*a+1;
	a->visualizzaLista(*a);*/

	/*
	cout<<"--------"<<endl;
	cout<<"inserisci dimensione lista di char: ";
	int dim2;
	cin>>dim2;
	ListaChar *b=0;
	b=b->costruisci(dim2);
	b->visualizzaLista(b);


	if(*a==*b)
		cout<<"le liste sono uguali";
	else
		cout<<"le liste non sono uguali";*/


	a=a->togliNodo(a,'o');
    cout<<"---------"<<endl;
    //a=a->reverse(a);
	a->visualizzaLista(*a);


/*
	cout<<"inserisci match da trovare nella lista: ";
    char s[dim]={};
    cin>>s;
    bool m=a->trova(s,a);
    if(m)
    	cout<<"il match è stato trovato."<<endl;
    else
    	cout<<"il match non è stato trovato."<<endl;

    cout<<"--------"<<endl<<"inserisci nuova lista, dimensione: ";
    int dim2;
    cin>>dim2;
    ListaChar *b=0;
    b=b->costruisci(dim2);
    b->visualizzaLista(b);
    cout<<"Lista Unita"<<endl;
    ListaChar *p=a;
    a=a->unisci(a,b);
    p->visualizzaLista(p);
    */
}

