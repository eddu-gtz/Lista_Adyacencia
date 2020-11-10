#include "citerador.h"

void CIterador::SetNodo(CNodo* pNodo)
{
    pActual = pNodo;
}

void CIterador::InsertarAdelante(CNodoGrafo* cont)
{
    pActual->insertarAdelante(cont);
}

CNodoGrafo* CIterador::EliminarSiguiente()
{
    return pActual->eliminarAdelante();
}

///OPERADORES
void CIterador::operator=(CIterador& otro)
{
    pActual = otro.pActual;
}

bool CIterador::operator==(CIterador& otro)
{
    return pActual == otro.pActual;
}

bool CIterador::operator!=(CIterador& otro)
{
    return pActual != otro.pActual;
}

///Operador Infijo
void CIterador::operator++()
{
    pActual = pActual->pSig;
}

///Operador Infijo
void CIterador::operator--()
{
    pActual = pActual->pAnt;
}

CListaAdyacencia*& CIterador::operator*()
{
    return pActual->Adyacencias;
}

CNodoGrafo*& CIterador::operator+()
{
    return pActual->InfoNodo;
}

///Operador Posfijo
void CIterador::operator++(int)
{
    pActual = pActual->pSig;
}

///Operador Posfijo
void CIterador::operator--(int)
{
    pActual = pActual->pAnt;
}
