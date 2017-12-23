#ifndef LISTACHAR_H
#define LISTACHAR_H

class ListaChar {
 private:
    char info;
    ListaChar *next;
 public:
    ListaChar(char, ListaChar *);
    ListaChar(const ListaChar &);
    ListaChar& operator=(const ListaChar &);
    ~ListaChar();
    ListaChar *costruisci(int);
    ListaChar *togliNodo();
    ListaChar *togliNodo(char);
    ListaChar *togliNodo(int);
    ListaChar *ordina();
    int trova(char *, ListaChar *) const;
    ListaChar* operator+(ListaChar *);
    ListaChar *unisci(ListaChar *);
    void visualNodoChar(ListaChar *) const;
    void visualNodo(ListaChar *) const;
    void visualNodoNext(ListaChar *) const;
    ListaChar * aggiungiNodo(char, ListaChar *);
};

#endif // LISTACHAR_H

