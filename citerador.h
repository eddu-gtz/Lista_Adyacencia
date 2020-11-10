#ifndef CITERADOR_H_INCLUDED
#define CITERADOR_H_INCLUDED

#include "cnodo.h"

class CIterador{
private:
    CNodo* pActual;
    void SetNodo(CNodo* pNodo);
public:

    friend class CLista;

    void InsertarAdelante(CNodoGrafo* cont);
    CNodoGrafo* EliminarSiguiente();

    ///Sobrecarga de operadores
    void operator = (CIterador& otro);
    bool operator == (CIterador& otro);
    bool operator != (CIterador& otro);
    void operator ++ ();
    void operator -- ();
    CListaAdyacencia*& operator * ();
    CNodoGrafo*& operator + ();


    void operator ++(int);
    void operator --(int);

};

#endif // CITERADOR_H_INCLUDED
