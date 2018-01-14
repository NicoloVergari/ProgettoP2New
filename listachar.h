#ifndef LISTACHAR_H
#define LISTACHAR_H

class ListaChar {
 private:
    char info;
    ListaChar *next;

    static bool equals(const ListaChar*, const ListaChar *);

 public:
    ListaChar();
    ListaChar(char, ListaChar *);
    //ListaChar(const ListaChar &);
    ListaChar& operator=(const ListaChar &);
    //~ListaChar();
    ListaChar *costruisci(int);
    ListaChar *togliNodo(ListaChar *, char);
    ListaChar *togliNodo(int);
    ListaChar *ordina();
    bool trova(char *, ListaChar *) const;
    bool operator==(const ListaChar &) const;
    ListaChar* operator+(ListaChar *);
    ListaChar *opiu(ListaChar*, int n);
    ListaChar *unisci(ListaChar *, ListaChar *);
    void visualNodoChar(ListaChar *) const;
    void visualNodo(ListaChar *) const;
    void visualNodoNext(ListaChar *) const;
    ListaChar * aggiungiNodo(char, ListaChar *);
    void visualizzaLista(ListaChar *) const;
    ListaChar *reverse(ListaChar *);
    ListaChar *insRe(ListaChar *, ListaChar *);
    ListaChar *nextNodo();
};

#endif // LISTACHAR_H
