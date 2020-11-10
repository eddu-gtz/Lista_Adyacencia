#ifndef CNODOGRAFO_H_INCLUDED
#define CNODOGRAFO_H_INCLUDED

#include <string>

class CNodoGrafo{
private:
    int id;
    std::string nombre;
    int satisfaccion;
    int costo;

public:
    CNodoGrafo();
    CNodoGrafo(int, std::string, int, int);

    void Imprimir();

    int getID();

};

#endif // CNODOGRAFO_H_INCLUDED
