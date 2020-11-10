#include "cnodografo.h"
#include <iostream>

using namespace std;

CNodoGrafo::CNodoGrafo()
{
    id = 0;
    nombre = "";
    costo = 0;
    satisfaccion = 0;
}

CNodoGrafo::CNodoGrafo(int dato1, string dato2, int dato3, int dato4)
                : id(dato1), nombre(dato2), satisfaccion(dato3), costo(dato4){ }

void CNodoGrafo::Imprimir()
{
    cout<<"\t<=   "<<id<<".  "<<nombre<<"   =>\n";
    cout<<"\t   Satisfaccion: "<<satisfaccion<<"\t   Costo: "<<costo<<endl<<endl<<endl;
}

int CNodoGrafo::getID()
{
    return id;
}
