#ifndef CEDGEINFO_H_INCLUDED
#define CEDGEINFO_H_INCLUDED

#include "cnodografo.h"

class CEdgeInfo{
private:
    CNodoGrafo* destino;
    int costo;

public:
    CEdgeInfo();
    CEdgeInfo(CNodoGrafo*&, int);

    void Imprimir();

    int getID();

};

#endif // CEDGEINFO_H_INCLUDED
