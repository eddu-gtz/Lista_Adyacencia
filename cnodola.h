#ifndef CNODOLA_H_INCLUDED
#define CNODOLA_H_INCLUDED

#include "cedgeinfo.h"
#include "cnodografo.h"

class CNodoLA{
private:
    friend class CListaAdyacencia;
    friend class CIteradorAdyacencia;

    CNodoLA* pSig = nullptr;
    CNodoLA* pAnt = nullptr;
    CEdgeInfo* InfoAdyacencia;

    void insertarAdelante(CEdgeInfo* );
    void insertarAdelante(CNodoGrafo* , int );
    CEdgeInfo* eliminarAdelante();
};

#endif // CNODOLA_H_INCLUDED
