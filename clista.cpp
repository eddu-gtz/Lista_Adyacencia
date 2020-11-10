#include "clista.h"
#include <iostream>

using namespace std;

CLista::CLista()
{
     //Enlazar los nodos cabecera
    Inicio.pSig = &Final;
    Final.pAnt = &Inicio;
}

CLista::~CLista()
{
    //Eliminar todos los nodos de la lista
    while(Inicio.pSig != &Final){
         Inicio.eliminarAdelante();
    }
}

void CLista::insertarAlInicio(CNodoGrafo* ndato)
{
    Inicio.insertarAdelante(ndato);
}

void CLista::insertarAlFinal(CNodoGrafo* ndato)
{
    //Regresar uno para poder insertar al final
    Final.pAnt->insertarAdelante(ndato);
}

CNodoGrafo* CLista::eliminarAlInicio()
{
    return Inicio.eliminarAdelante();
}

CNodoGrafo* CLista::eliminarAlFinal()
{
    //Regresar dos posiciones para poder eliminar al final
    return Final.pAnt->pAnt->eliminarAdelante();
}

int CLista::Size()
{
    //Contar el numero de nodos que contiene la lista
    int numNodos(0);

    CNodo* aux = Inicio.pSig;

    while( aux != &Final){
        numNodos++;
        aux = aux->pSig;
    }

    return numNodos;
}

bool CLista::isEmpty()
{
    ///Si regresa verdadero es porque esta vacia
    return Inicio.pSig == &Final;
}

bool CLista::isFull()
{
    CNodo* pNodo = new (CNodo);
    ///Si regresa nullptr es porque se acabo la memoria
    return pNodo == nullptr;
}

CIterador& CLista::Begin()
{
    //Retorna por referencia el nodo que se encuentra al inicio de la lista
    m_ItBegin.SetNodo(Inicio.pSig);
    return m_ItBegin;
}

CIterador& CLista::End()
{
    //Retorna por referencia el nodo que se encuentra al final de la lista
    m_ItEnd.SetNodo(&Final);
    return m_ItEnd;
}

void CLista::Imprimir()
{
    CIterador it;
    for(it = Begin(); it != End(); it++){

        it.pActual->InfoNodo->Imprimir();
        cout<<endl;
    }
}

void CLista::ImprimirTodo()
{
    char a = 220;
    CIterador it;

    for(it = Begin(); it != End(); it++){
        if(!it.pActual->Adyacencias->isEmpty()){

            cout<<" "<<a<<" Puedes ir desde: "<<endl;
            it.pActual->InfoNodo->Imprimir();

            it.pActual->Adyacencias->Imprimir();
            cout<<endl;

        }

    }
}

CListaAdyacencia* CLista::buscar(int buscado){

    CIterador it;
    CListaAdyacencia* listaAdy = new CListaAdyacencia();

    if(!isEmpty())
    {
        for(it = Begin(); it != End(); it++)
        {
            listaAdy = *it;


            if(it.pActual->InfoNodo->getID() == buscado)
            {
                return listaAdy;
            }
            else
            {
                listaAdy = 0;
            }
        }
    }
    return listaAdy;
}

CNodoGrafo* CLista::buscarVertice(int buscado){

    CIterador it;

    if(!isEmpty())
    {
        for(it = Begin(); it != End(); it++)
        {
            if(it.pActual->InfoNodo->getID() == buscado)
            {
                return  it.pActual->InfoNodo;
            }
        }
    }
    return 0;
}
