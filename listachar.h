class ListaChar {
 private:
    char info;
    ListaChar *next;

    static bool equals(ListaChar*, ListaChar*);

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
    bool trova(char *, ListaChar *);
    bool operator==(const ListaChar &) const;
    ListaChar* operator+(ListaChar *);
    ListaChar *unisci(ListaChar *, ListaChar *);
    ListaChar * aggiungiNodo(char, ListaChar *);
    void visualizzaLista(ListaChar *) const;
    ListaChar *reverse(ListaChar *);
    ListaChar *insRe(ListaChar *, ListaChar *);
};

#endif // LISTACHAR_H

