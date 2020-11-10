#ifndef CNODO_H_INCLUDED
#define CNODO_H_INCLUDED

#include "cnodografo.h"
#include "clistaAdyacencia.h"

class CNodo{
private:
    friend class CLista;
    friend class CIterador;

    CNodo* pSig = nullptr;
    CNodo* pAnt = nullptr;
    CNodoGrafo* InfoNodo;
    CListaAdyacencia* Adyacencias = new CListaAdyacencia();

    void insertarAdelante(CNodoGrafo* );
    CNodoGrafo* eliminarAdelante();
};

#endif // CNODO_H_INCLUDED
