#include "cnodola.h"

void CNodoLA::insertarAdelante(CEdgeInfo* dat)
{
    //Crea un nuevo nodo
    CNodoLA* pNuevo = new (CNodoLA);
    //se asigna el dato al nodo
    pNuevo->InfoAdyacencia = dat;
    //El nuevo nodo en su campo anterior apunta a this
    pNuevo->pAnt = this;
    //Se en laza el puntero siguiente
    pNuevo->pSig = this->pSig;
    //Se enlazan los punteros de los nodos existentes al nuevo nodo
    pNuevo->pSig->pAnt = pNuevo;

    this->pSig = pNuevo;
}

void CNodoLA::insertarAdelante(CNodoGrafo* nodo, int costo)
{
    CEdgeInfo* dat = new CEdgeInfo(nodo, costo);

    //Crea un nuevo nodo
    CNodoLA* pNuevo = new (CNodoLA);
    //se asigna el dato al nodo
    pNuevo->InfoAdyacencia = dat;
    //El nuevo nodo en su campo anterior apunta a this
    pNuevo->pAnt = this;
    //Se en laza el puntero siguiente
    pNuevo->pSig = this->pSig;
    //Se enlazan los punteros de los nodos existentes al nuevo nodo
    pNuevo->pSig->pAnt = pNuevo;

    this->pSig = pNuevo;
}


CEdgeInfo* CNodoLA::eliminarAdelante()
{
    //Variable para poder guardar el dato
    CEdgeInfo* dat;
    //Se crea un putero auxiliar para posteriormente eliminar el nodo
    CNodoLA* aux = this->pSig;
    //Se quita el enlace al nodo a eliminar
    aux->pSig->pAnt = this;

    this->pSig = aux->pSig;
    //Se recupera el dato
    dat = aux->InfoAdyacencia;
    //Se elimina el nodo
    delete aux;
    //Retorna el dato
    return dat;
}
