#include "clistaAdyacencia.h"
#include <iostream>

using namespace std;

CListaAdyacencia::CListaAdyacencia()
{
    //Enlazar los nodos cabecera
    Inicio.pSig = &Final;
    Final.pAnt = &Inicio;
}

CListaAdyacencia::~CListaAdyacencia()
{
    //Eliminar todos los nodos de la lista
    while(Inicio.pSig != &Final){
        Inicio.eliminarAdelante();
        //cout<<"\n\tSe elimino una arista";
    }
    //cout<<"\nSe elimino la lista";
}

void CListaAdyacencia::insertarAlInicio(CNodoGrafo* ndato, int cost)
{
    Inicio.insertarAdelante(ndato, cost);
}

void CListaAdyacencia::insertarAlFinal(CNodoGrafo* ndato, int cost)
{
    //Regresar uno para poder insertar al final
    Final.pAnt->insertarAdelante( ndato, cost);
}

void CListaAdyacencia::insertarAlFinal(CEdgeInfo* ndato)
{
    //Regresar uno para poder insertar al final
    Final.pAnt->insertarAdelante(ndato);
}

CEdgeInfo* CListaAdyacencia::eliminarAlInicio()
{
    return Inicio.eliminarAdelante();
}

CEdgeInfo* CListaAdyacencia::eliminarAlFinal()
{
    //Regresar dos posiciones para poder eliminar al final
    return Final.pAnt->pAnt->eliminarAdelante();
}

int CListaAdyacencia::Size()
{
    //Contar el numero de nodos que contiene la lista
    int numNodos(0);

    CNodoLA* aux = Inicio.pSig;

    while( aux != &Final){
        numNodos++;
        aux = aux->pSig;
    }

    return numNodos;
}

bool CListaAdyacencia::isEmpty()
{
    //Si regresa verdadero es porque esta vacia
    return Inicio.pSig == &Final;
}

bool CListaAdyacencia::isFull()
{
    CNodoLA* pNodo = new (CNodoLA);
    ///Si regresa nullptr es porque se acabo la memoria
    return pNodo == nullptr;
}

CIteradorAdyacencia& CListaAdyacencia::Begin()
{
    //Retorna por referencia el nodo que se encuentra al inicio de la lista
    m_ItBegin.SetNodo(Inicio.pSig);
    return m_ItBegin;
}

CIteradorAdyacencia& CListaAdyacencia::End()
{
    //Retorna por referencia el nodo que se encuentra al final de la lista
    m_ItEnd.SetNodo(&Final);
    return m_ItEnd;
}

void CListaAdyacencia::Imprimir()
{
    CIteradorAdyacencia it;
    for(it = Begin(); it != End(); it++){
        it.pActual->InfoAdyacencia->Imprimir();
        cout<<endl;
    }
}
