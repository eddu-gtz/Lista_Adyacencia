#ifndef CLISTA_H_INCLUDED
#define CLISTA_H_INCLUDED

#include "cnodo.h"
#include "cnodografo.h"
#include "citerador.h"

class CLista{
private:
    CNodo Inicio;
    CNodo Final;

    CIterador m_ItBegin;
    CIterador m_ItEnd;

public:

    CLista();
    ~CLista();

    void insertarAlInicio(CNodoGrafo* );
    void insertarAlFinal(CNodoGrafo* );
    CNodoGrafo* eliminarAlInicio();
    CNodoGrafo* eliminarAlFinal();

    int Size();
    bool isEmpty();
    bool isFull();

    void Imprimir();
    void ImprimirTodo();

    CIterador& Begin();
    CIterador& End();

    CListaAdyacencia* buscar(int );
    CNodoGrafo* buscarVertice(int );
};

#endif // CLISTA_H_INCLUDED
