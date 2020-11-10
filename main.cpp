#include <iostream>
#include "cnodografo.h"
#include "cedgeinfo.h"
#include "clista.h"
#include "clistaAdyacencia.h"

using namespace std;

int main()
{
    int opc;
    int satisfaccion, costo, id=0;
    int vertice1, vertice2;
    string nombre;

    CLista listaMaestra;
    CListaAdyacencia listaAd;
    CIterador it;
    CIteradorAdyacencia itAdyacencia;

    CNodoGrafo* pueblito0 = new CNodoGrafo(id,"Mazamitla, Jalisco",8,6);
    CNodoGrafo* pueblito1 = new CNodoGrafo(++id,"Tequila, Jalisco",7,6);
    CNodoGrafo* pueblito2 = new CNodoGrafo(++id,"Tapalpa, Jalisco",6,5);
    CNodoGrafo* pueblito3 = new CNodoGrafo(++id,"Lagos de Moreno, Jalisco",6,4);
    CNodoGrafo* pueblito4 = new CNodoGrafo(++id,"Valladolid, Yucatan",7,7);
    CNodoGrafo* pueblito5 = new CNodoGrafo(++id,"Mascota, Jalisco",5,5);
    CNodoGrafo* pueblito6 = new CNodoGrafo(++id,"Talpa de Allende, Jalisco",6,7);
    CNodoGrafo* pueblito7 = new CNodoGrafo(++id,"Dolores Hidalgo, Guanajuato",7,7);
    CNodoGrafo* pueblito8 = new CNodoGrafo(++id,"Jala, Nayarit",5,3);
    CNodoGrafo* pueblito9 = new CNodoGrafo(++id,"San Joaquin, Queretaro",4,5);
    CNodoGrafo* pueblito10 = new CNodoGrafo(++id,"Palenque, Chiapas",9,7);
    CNodoGrafo* pueblito11 = new CNodoGrafo(++id,"Patzcuaro, Michoacan",8,5);
    CNodoGrafo* pueblito12 = new CNodoGrafo(++id,"Valle de Bravo, Estado de Mexico",6,7);
    CNodoGrafo* pueblito13 = new CNodoGrafo(++id,"Mineral de Pozos, Guanajuato",6,5);
    CNodoGrafo* pueblito14 = new CNodoGrafo(++id,"Loreto, Baja California Sur",8,6);
    CNodoGrafo* pueblito15 = new CNodoGrafo(++id,"Papantla, Veracruz",9,8);
    CNodoGrafo* pueblito16 = new CNodoGrafo(++id,"San Cristobal de las Casas, Chiapas",8,7);
    CNodoGrafo* pueblito17 = new CNodoGrafo(++id,"San Pablo Villa de Mitla, Oaxaca",4,3);
    CNodoGrafo* pueblito18 = new CNodoGrafo(++id,"Sombrerete, Zacatecas",6,7);
    CNodoGrafo* pueblito19 = new CNodoGrafo(++id,"Taxco de Alarcon, Guerrero",6,7);

    ///INSERTAR NODOS
    listaMaestra.insertarAlFinal(pueblito0);
    listaMaestra.insertarAlFinal(pueblito1);
    listaMaestra.insertarAlFinal(pueblito2);
    listaMaestra.insertarAlFinal(pueblito3);
    listaMaestra.insertarAlFinal(pueblito4);
    listaMaestra.insertarAlFinal(pueblito5);
    listaMaestra.insertarAlFinal(pueblito6);
    listaMaestra.insertarAlFinal(pueblito7);
    listaMaestra.insertarAlFinal(pueblito8);
    listaMaestra.insertarAlFinal(pueblito9);
    listaMaestra.insertarAlFinal(pueblito10);
    listaMaestra.insertarAlFinal(pueblito11);
    listaMaestra.insertarAlFinal(pueblito12);
    listaMaestra.insertarAlFinal(pueblito13);
    listaMaestra.insertarAlFinal(pueblito14);
    listaMaestra.insertarAlFinal(pueblito15);
    listaMaestra.insertarAlFinal(pueblito16);
    listaMaestra.insertarAlFinal(pueblito17);
    listaMaestra.insertarAlFinal(pueblito18);
    listaMaestra.insertarAlFinal(pueblito19);


    ///INSERTAR ARISTAS
    CListaAdyacencia* arista = new CListaAdyacencia();

    arista = listaMaestra.buscar(0);
    arista->insertarAlFinal(pueblito1,36);
    arista->insertarAlFinal(pueblito2, 27);
    arista->insertarAlFinal(pueblito11, 79);

    arista = listaMaestra.buscar(1);
    arista->insertarAlFinal(pueblito0, 36);
    arista->insertarAlFinal(pueblito3, 47);

    arista = listaMaestra.buscar(2);
    arista->insertarAlFinal(pueblito0, 27);
    arista->insertarAlFinal(pueblito6, 31);
    arista->insertarAlFinal(pueblito5, 35);

    arista = listaMaestra.buscar(3);
    arista->insertarAlFinal(pueblito7, 38);

    arista = listaMaestra.buscar(4);
    arista->insertarAlFinal(pueblito10, 195);

    arista = listaMaestra.buscar(5);
    arista->insertarAlFinal(pueblito2, 35);
    arista->insertarAlFinal(pueblito8, 42);

    arista = listaMaestra.buscar(6);
    arista->insertarAlFinal(pueblito2, 31);
    arista->insertarAlFinal(pueblito9, 136);

    arista = listaMaestra.buscar(7);
    arista->insertarAlFinal(pueblito3, 38);
    arista->insertarAlFinal(pueblito9, 53);
    arista->insertarAlFinal(pueblito13, 15);

    arista = listaMaestra.buscar(8);
    arista->insertarAlFinal(pueblito5, 42);
    arista->insertarAlFinal(pueblito14, 115);
    arista->insertarAlFinal(pueblito18, 87);

    arista = listaMaestra.buscar(9);
    arista->insertarAlFinal(pueblito7, 53);
    arista->insertarAlFinal(pueblito15, 93);
    arista->insertarAlFinal(pueblito6, 196);

    arista = listaMaestra.buscar(10);
    arista->insertarAlFinal(pueblito4, 195);
    arista->insertarAlFinal(pueblito16, 23);
    arista->insertarAlFinal(pueblito17, 157);

    arista = listaMaestra.buscar(11);
    arista->insertarAlFinal(pueblito0, 79);
    arista->insertarAlFinal(pueblito12, 82);
    arista->insertarAlFinal(pueblito17, 180);

    arista = listaMaestra.buscar(12);
    arista->insertarAlFinal(pueblito11, 82);
    arista->insertarAlFinal(pueblito19, 91);

    arista = listaMaestra.buscar(13);
    arista->insertarAlFinal(pueblito7, 15);

    arista = listaMaestra.buscar(14);
    arista->insertarAlFinal(pueblito8, 115);

    arista = listaMaestra.buscar(15);
    arista->insertarAlFinal(pueblito9, 93);

    arista = listaMaestra.buscar(16);
    arista->insertarAlFinal(pueblito10, 23);

    arista = listaMaestra.buscar(17);
    arista->insertarAlFinal(pueblito11, 180);
    arista->insertarAlFinal(pueblito19, 103);
    arista->insertarAlFinal(pueblito10, 157);

    arista = listaMaestra.buscar(18);
    arista->insertarAlFinal(pueblito8, 87);

    arista = listaMaestra.buscar(19);
    arista->insertarAlFinal(pueblito12, 91);
    arista->insertarAlFinal(pueblito17, 103);


    do
    {

        ///Imprimir menu
        system("cls");
        cout<<" [1]  Ingresar Pueblo Magico (vertice)"<<endl;
        cout<<" [2]  Ingresar relacion entre pueblos (arista)"<<endl;
        cout<<" [3]  Imprimir lista de adyacencia"<<endl;
        cout<<" [4]  Eliminar Arista"<<endl;
        cout<<" [5]  Eliminar Nodo"<<endl;
        cout<<" [6]  Salir"<<endl;
        cout<<"\n Ingresa una opcion: ";
        cin>>opc;
        cin.sync();

        switch(opc)
        {
        ///NUEVO VERTICE
            case 1:
            {
                system("cls");

                ///VERTICE
                //id++;
                cout<<endl<<" Ingresa el nombre del pueblo magico: ";
                getline(cin, nombre);
                cout<<endl<<" Ingresa el grado de satisfaccion que te brinda: ";
                cin>>satisfaccion;
                cout<<endl<<" Ingresa el costo por estar ahi: ";
                cin>>costo;

                CNodoGrafo* pueblito = new CNodoGrafo(id,nombre,satisfaccion,costo);

                ///insertar en el arreglo
                listaMaestra.insertarAlFinal(pueblito);
                id++;

            }
            break;
            ///NUEVA ARISTA
            case 2:
                system("cls");
                if(!listaMaestra.isEmpty())
                {
                    cout<<endl<<" Lista de pueblitos magicos (vertices)"<<endl<<endl;

                    listaMaestra.Imprimir();

                    cout<<endl<<" Ingresa el ID del primer pueblo a enlazar: ";
                    cin>>vertice1;
                    cout<<endl<<" Ingresa el ID del segundo pueblo a enlazar: ";
                    cin>>vertice2;
                    cout<<endl<<" Ingresa el costo por transitar entre estos dos pueblos: ";
                    cin>>costo;


                    CListaAdyacencia* arista = new CListaAdyacencia();
                    CNodoGrafo* nodo = new CNodoGrafo();

                    ///ENLAZAR EL PRIMER VERTICE
                    //Regresa la informacion del segundo vertice
                    nodo = listaMaestra.buscarVertice(vertice2);
                    //Regresa la lista de adyacencia buscada
                    arista = listaMaestra.buscar(vertice1);


                    //Si se encontraron datos
                    if(arista != 0 && nodo != 0){
                        //se crea una arista
                        CEdgeInfo* dest = new CEdgeInfo(nodo, costo);
                        //Insertar una arista en la lista de adyacencia
                        arista->insertarAlFinal(dest);
                    }
                    else {
                        //No hay ningun dato
                        cout<<endl<<" Hay algun elemento erroneo "<<endl;
                        break;
                    }

                    ///ENLAZAR EL SEGUNDO VERTICE
                    //Regresa la informacion del primer vertice
                    nodo = listaMaestra.buscarVertice(vertice1);
                    //Regresa la lista de adyacencia buscada
                    arista = listaMaestra.buscar(vertice2);

                    if(arista != 0 && nodo != 0){
                        //se crea una arista
                        CEdgeInfo* dest = new CEdgeInfo(nodo, costo);
                        //Insertar una arista en esa lista de adyacencia
                        arista->insertarAlFinal(dest);
                    }
                    else{
                        ///No hay ningun dato
                        cout<<endl<<" No coincide algun elemento del segundo ingresado"<<endl;
                        break;
                    }

                }
                else
                {
                    cout<<" La lista esta vacia"<<endl;
                }

                system("pause");
                break;

            ///IMPRIMIR LISTA DE ADYACENCIA
            case 3:
                {
                    system("cls");

                    if(!listaMaestra.isEmpty())
                    {
                        listaMaestra.ImprimirTodo();
                    }
                    else
                    {
                        cout<<" La lista esta vacia"<<endl;
                    }

                    system("pause");

                }
                break;
            ///ELIMINAR ARISTA
            case 4:
                {
                    bool eliminado1 = false, eliminado2 = false;
                    //Pedir datos de los nodos
                    cout<<endl<<" Ingresa el ID del primer pueblo: ";
                    cin>>vertice1;
                    cout<<endl<<" Ingresa el ID del segundo pueblo: ";
                    cin>>vertice2;

                    CListaAdyacencia* arista1 = new CListaAdyacencia();
                    CListaAdyacencia* arista2 = new CListaAdyacencia();
                    CEdgeInfo* dest = new (CEdgeInfo);

                    //Regresa la lista de adyacencia buscada
                    arista1 = listaMaestra.buscar(vertice1);
                    //Regresa la lista de adyacencia buscada
                    arista2 = listaMaestra.buscar(vertice2);

                    if(arista1 != 0 && arista2 != 0){
                        for(itAdyacencia = arista1->Begin(); itAdyacencia != arista1->End(); itAdyacencia++){
                            dest = *itAdyacencia;

                            if(dest->getID() == vertice2){
                                itAdyacencia.EliminarSiguiente();
                                eliminado1 = true;
                                break;
                            }
                        }

                        for(itAdyacencia = arista2->Begin(); itAdyacencia != arista2->End(); itAdyacencia++){
                            dest = *itAdyacencia;

                            if(dest->getID() == vertice1){
                                itAdyacencia.EliminarSiguiente();
                                eliminado2 = true;
                                break;
                            }
                        }

                        if(eliminado1 && eliminado2)
                             cout<<endl<<" Se ha eliminado la adyacencia correctamente"<<endl;
                    }
                    else{
                        ///No hay ningun dato
                        cout<<endl<<" No coincide algun elemento ingresado"<<endl;
                    }

                    delete dest;

                    system("pause");

                    break;
                }

            ///ELIMINAR NODO
            case 5:
                {
                    bool eliminado = false;
                    CIteradorAdyacencia itAd;
                    //Pedir datos de los nodos
                    cout<<endl<<" Ingresa el ID del pueblo a eliminar: ";
                    cin>>vertice1;

                    CListaAdyacencia* arista = new CListaAdyacencia();
                    CListaAdyacencia* arista2 = new CListaAdyacencia();
                    CEdgeInfo* dest = new (CEdgeInfo);

                    //Regresa la lista de adyacencia buscada
                    arista = listaMaestra.buscar(vertice1);

                    ///Eliminar relaciones
                    if(arista != 0){
                        for(itAdyacencia = arista->Begin(); itAdyacencia != arista->End(); itAdyacencia++){
                            dest = *itAdyacencia;
                            //Buscar sus aristas
                            vertice2 = dest->getID();
                            arista2 = listaMaestra.buscar(vertice2);

                            for(itAd= arista2->Begin(); itAd != arista2->End(); itAd++){
                                dest = *itAd;
                                //eliminar la informacion de adyacencia de las demas aristas
                                if(dest->getID() == vertice1){
                                    itAd.EliminarSiguiente();
                                    break;
                                }
                            }
                        }
                    }

                    CNodoGrafo* eliminar = new CNodoGrafo();

                    ///Eliminar nodo
                    for(it = listaMaestra.Begin(); it != listaMaestra.End(); it++){
                        //Retorna el nodo de la listaMaestra;
                        eliminar = +it;

                        if(eliminar->getID() == vertice1){
                            it--;
                            it.EliminarSiguiente();
                            eliminado = true;
                            break;
                        }
                    }

                    if(eliminado){
                        cout<<endl<<" Se elimino el nodo correctamente"<<endl<<endl;
                    }

                    delete dest;

                    system("pause");
                    break;
                }
            ///SALIR
            case 6:
                cout<<" Ha salido del programa"<<endl;
                break;

            default:
                cout<<" Esa opcion no existe"<<endl;
        }

    }
    while(opc != 6);

    //Liberacion de memoria
    delete pueblito0;
    delete pueblito1;
    delete pueblito2;
    delete pueblito3;
    delete pueblito4;
    delete pueblito5;
    delete pueblito6;
    delete pueblito7;
    delete pueblito8;
    delete pueblito9;
    delete pueblito10;
    delete pueblito11;
    delete pueblito12;
    delete pueblito13;
    delete pueblito14;
    delete pueblito15;
    delete pueblito16;
    delete pueblito17;
    delete pueblito18;
    delete pueblito19;

    delete arista;
    return 0;
}
