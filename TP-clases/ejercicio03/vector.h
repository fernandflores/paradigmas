#ifndef vector_h
#define vector_h
#include <iostream>
using namespace std;

const int indef = -999;
typedef int item;

class Vector
{
    private:
        item *arreglo;
        int max;
        item * reservaMemoria(int max); // metodo privado que asigna memoria dinamica
        bool Redimensionar(int nuevaDim);
    public:
        void mostrarVector();
        void CrearVectorVacio(int dim=10); // toma 10 por defecto
        bool Insertar(int pos, item valor);
        int getCapacidad();
        item getValor(int pos);
        bool Borrar(int pos);
        bool Borrar();


};
bool operator==(Vector V1, Vector V2);

#endif