#include "moto.h"
#include <iostream>
using namespace std;

int Moto::getCilindrada()
{
    return cilindrada;
}
double Moto::CalcularAlquiler()
{
    if (cilindrada<=250) return Vehiculo::getPrecio();
    if (cilindrada>250 && cilindrada<=600) return Vehiculo::getPrecio()*1.25;
    return Vehiculo::getPrecio()*1.5;
}
void Moto:: MostrarInfo()
{
    Vehiculo::MostrarInfo();
    cout<<"cc= "<<cilindrada<<endl;
}
