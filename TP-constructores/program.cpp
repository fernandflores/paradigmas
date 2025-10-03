#include "pelicula.h"
#include <iostream>

using namespace std;

int main()
{
    Pelicula p1("pelicula 1 ", "director 1",true,100,'N');
    Pelicula p2("pelicula 2 ", "director 2",false,200,'I');
    Pelicula p3(p1); // constructor de copia
    Pelicula p4; // constructor por defecto
    p1.mostrarInfo();
    p3.mostrarInfo();
    p4.mostrarInfo();
    cout<<"Precio final de p2: "<<p2.calcularPrecioFinal()<<endl;
    cout<<endl;
    Pelicula *peliculas[3];
    peliculas[0] = new Pelicula("pelicula 3 ", "director 3",true,150,'N');
    peliculas[1] = new Pelicula("pelicula 4 ", "director 4",false,300,'I');
    peliculas[2] = new Pelicula("pelicula 5 ", "director 5",true,400,'I');
    for (int i = 0; i < 3; i++)
    {
        cout<<endl<<"mostrando info de la pelicula: "<<i+1<<endl;
        peliculas[i]->mostrarInfo();
    }
    // destruir con destructor
    cout<<p1.getAutonumerico()<<endl;
    p1.setDirector("nuevo dir");
    p1.mostrarInfo();
    p1.~Pelicula();
    p2.~Pelicula();
    p1.mostrarInfo();

    int opc;
    cin>>opc;
    return 0;
}