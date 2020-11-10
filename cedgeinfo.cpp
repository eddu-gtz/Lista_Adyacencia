#include "cedgeinfo.h"
#include <iostream>

using namespace std;

CEdgeInfo::CEdgeInfo()
{

}

CEdgeInfo::CEdgeInfo(CNodoGrafo*& dest, int cos): destino(dest), costo(cos)
{
}

void CEdgeInfo::Imprimir()
{
    cout<<" Con un coste de "<<costo<<" hasta: ";
    destino->Imprimir();
    cout<<endl;
}

int CEdgeInfo::getID(){
    return destino->getID();
}
