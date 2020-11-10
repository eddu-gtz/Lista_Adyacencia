#include "citeradorAdyacencia.h"

void CIteradorAdyacencia::SetNodo(CNodoLA* pNodo)
{
    pActual = pNodo;
}

void CIteradorAdyacencia::InsertarAdelante(CEdgeInfo* cont)
{
    pActual->insertarAdelante(cont);
}

CEdgeInfo* CIteradorAdyacencia::EliminarSiguiente()
{
     pActual = pActual->pAnt;
    return pActual->eliminarAdelante();
}

void CIteradorAdyacencia::operator=(CIteradorAdyacencia& otro)
{
    pActual = otro.pActual;
}

bool CIteradorAdyacencia::operator==(CIteradorAdyacencia& otro)
{
    return pActual == otro.pActual;
}

bool CIteradorAdyacencia::operator!=(CIteradorAdyacencia& otro)
{
    return pActual != otro.pActual;
}

void CIteradorAdyacencia::operator++()
{
     pActual = pActual->pSig;
}

void CIteradorAdyacencia::operator--()
{
    pActual = pActual->pAnt;
}

CEdgeInfo*& CIteradorAdyacencia::operator*()
{
    return pActual->InfoAdyacencia;
}

void CIteradorAdyacencia::operator++(int)
{
    pActual = pActual->pSig;
}

void CIteradorAdyacencia::operator--(int)
{
    pActual = pActual->pAnt;
}
