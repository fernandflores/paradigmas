#include "vector.h"
#include <iostream>
using namespace std;

item * Vector::reservaMemoria(int max)
{
    return  new item[max];
}
void Vector::CrearVectorVacio(int dim)
{
    max= dim;
    arreglo= reservaMemoria(max);
    for (int i = 0; i < max; i++)
    {
        arreglo[i]= indef;
    }
}
bool Vector::Redimensionar(int nuevaDim)
{
    if (nuevaDim <=0) return false;
    item *nuevoArreglo= reservaMemoria(nuevaDim);
    //copio datos del arreglo viejo al nuevo
    for (int i = 0; i < max; i++)
    {
        nuevoArreglo[i]= arreglo[i];
    }
    // relleno los espacios vacios con indef
    for (int i = max; i < nuevaDim; i++)
    {
        nuevoArreglo[i]= indef;
    }
    delete[] arreglo;
    arreglo= nuevoArreglo;
    max= nuevaDim;
    return true;   
}

void Vector::mostrarVector()
{
    cout<<"mostranso el arreglo: ";
    for (int i=0; i<max;i++)
    {
        cout<<arreglo[i]<<"  ";
    }
}
bool Vector::Insertar(int pos, item valor)
{
    if (pos>=max) Redimensionar(pos);
    if (pos<0) return false;
    arreglo[pos-1]= valor;
    return true;
    
}

int Vector::getCapacidad()
{
    return max;
}
item Vector::getValor(int pos)
{
    if (pos<0 || pos>=max) return indef;
    return arreglo[pos-1];
}   
bool Vector::Borrar(int pos)
{
    if (pos>max || pos<1) return false;
    arreglo[pos-1]= indef;
    return true;    
}
bool Vector::Borrar()
{
    for (int i = 0; i < max; i++)
    {
        arreglo[i]= indef;
    }
    return true;
}
bool operator==(Vector v1, Vector v2)
{
    if(v1.getCapacidad()!=v2.getCapacidad()) return false;
    for (int i = 0; i < v1.getCapacidad(); i++) 
    {
        if(v1.getValor(i+1)!=v2.getValor(i+1)) return false;
    }
    return true;
}