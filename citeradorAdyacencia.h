#ifndef CITERADORADYACENCIA_H_INCLUDED
#define CITERADORADYACENCIA_H_INCLUDED

#include "cnodola.h"

class CIteradorAdyacencia{
    private:
    CNodoLA* pActual;
    void SetNodo(CNodoLA* pNodo);
public:

    friend class CListaAdyacencia;

    void InsertarAdelante(CEdgeInfo* cont);
    CEdgeInfo* EliminarSiguiente();

    ///Sobrecarga de operadores
    void operator = (CIteradorAdyacencia& otro);
    bool operator == (CIteradorAdyacencia& otro);
    bool operator != (CIteradorAdyacencia& otro);
    void operator ++ ();
    void operator -- ();
    CEdgeInfo*& operator * ();

    void operator ++(int);
    void operator --(int);



};

#endif // CITERADORADYACENCIA_H_INCLUDED
