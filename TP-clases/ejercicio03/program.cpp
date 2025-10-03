#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
    Vector v1,v2,v3;
    v1.CrearVectorVacio(5);
    v2.CrearVectorVacio(5);
    v3.CrearVectorVacio(2);
    v1.mostrarVector();
    v1.Insertar(1,10);
    v1.Insertar(2,20);
    v2.Insertar(1,10);
    v2.Insertar(2,20);
    cout<<"mostrando v1"<<endl;
    v1.mostrarVector();
    cout<<endl<<"mostrando v2"<<endl;
    v2.mostrarVector();
    v3.Insertar(1,15);
    v3.Insertar(2,25);
    v3.Insertar(3,35);
    cout<<endl<<"mostrando v3"<<endl;
    v3.mostrarVector();
    cout<<endl<<"probando igualdad"<<endl;
    if (v1==v2) cout<<"v1 es igual a v2"<<endl;
    else cout<<"v1 es distinto a v2"<<endl;
    if (v1==v3) cout<<"v1 es igual a v3"<<endl;
    else cout<<"v1 es distinto a v3"<<endl;
    v3.Borrar(2);
    cout<<"mostrando v3 despues de borrar posicion 2"<<endl;
    v3.mostrarVector();
    v3.Insertar(15,100);
    cout<<"mostrando v3 despues de insertar 100 en posicion 15(deberia redimensionar)"<<endl;
    v3.mostrarVector();
    cout<<"capacidad de v3: "<<v3.getCapacidad()<<endl;
    int num;
    cin>>num;
    return 0;
}