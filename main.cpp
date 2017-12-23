#include "listachar.h"
#include<iostream>
using namespace std;

int main()
{
    ListaChar *a=new ListaChar('g',0);
    /*a->visualNodo(a);
    cout<<endl<<"-----------"<<endl;*/

    a=a->aggiungiNodo('s',a);
    /*a->visualNodo(a);
    cout<<endl;
    a->visualNodoNext(a);
    cout<<endl;*/
    char s[]="sg";
    cout<<endl;

    int tr;
    tr=a->ListaChar::trova(s,a);
    cout<<tr;
}
