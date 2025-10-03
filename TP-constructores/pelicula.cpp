#include "pelicula.h"
#include <iostream>
using namespace std;

// static
int Pelicula::autonumerico = 0;

// constructor por defecto
Pelicula :: Pelicula(): titulo(""), precioBase(0), tipoPelicula('N')
{

    id=0;
    director= "";
    estreno= false;
} 

//constructor sobrecargado
Pelicula :: Pelicula(string titulo, string director, bool estreno, float precioBase, char tipoPelicula): titulo(titulo), precioBase(precioBase), tipoPelicula(tipoPelicula)
{
    id= ++(this->autonumerico);  // hace q a autonumerico se le sume 1 y luego asigna ese valor a id (ambos se guardan, modifica ambos)
    this->director= director;
    this->estreno= estreno;
}
// constructor de copia
Pelicula :: Pelicula(const Pelicula &p): titulo(p.titulo), precioBase(p.precioBase), tipoPelicula(p.tipoPelicula)
{
    autonumerico++;
    id= autonumerico;
    director= p.director;
    estreno= p.estreno;
}

// destructor
Pelicula :: ~Pelicula()
{
    cout<<"Destruyendo pelicula de codigo: "<<id<<endl;
    id=0;
    director="";
    estreno=false;

}
void Pelicula :: setDirector(string director)
{
    this->director = director;
}
void Pelicula :: mostrarInfo() const
{
    cout<<"ID: "<<id<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Director: "<<director<<endl;
    if (estreno) cout<<"Estreno: Si"<<endl;
    else cout<<"Estreno: No"<<endl;
    cout<<"Precio base: "<<precioBase<<endl;
    cout<<"Tipo de pelicula: "<<tipoPelicula<<endl;
}
int Pelicula :: getAutonumerico()
{
    return autonumerico;
}
float Pelicula :: calcularPrecioFinal() const
{
    float montoFinal= precioBase;
    if (tipoPelicula=='I')
    {
        montoFinal*= 1.3 ; 
    }
    else
    {
        if (estreno==false)
        {
            montoFinal*= 0.8;
        }
    }
    return montoFinal;
}

