#ifndef CLISTAADYACENCIA_H_INCLUDED
#define CLISTAADYACENCIA_H_INCLUDED

#include "cnodola.h"
#include "cedgeinfo.h"
#include "citeradorAdyacencia.h"

class CListaAdyacencia{
private:
    CNodoLA Inicio;
    CNodoLA Final;

    CIteradorAdyacencia m_ItBegin;
    CIteradorAdyacencia m_ItEnd;

public:
    CListaAdyacencia();
    ~CListaAdyacencia();

    void insertarAlInicio(CNodoGrafo* , int  );
    void insertarAlFinal(CNodoGrafo* , int  );
    void insertarAlFinal(CEdgeInfo* );
    CEdgeInfo* eliminarAlInicio();
    CEdgeInfo* eliminarAlFinal();

    int Size();
    bool isEmpty();
    bool isFull();

    CIteradorAdyacencia& Begin();
    CIteradorAdyacencia& End();

    void Imprimir();
};

#endif // CLISTAADYACENCIA_H_INCLUDED
