#include "vehiculo.h"
#include <iostream>
using namespace std;

void Vehiculo::MostrarInfo()
{
    cout<<"patente= "<<patente<<endl;
    cout<<"marca= "<<marca<<endl;
    cout<<"titular= "<<titular<<endl;
    cout<<"precio= "<<precio<<endl;
}
string Vehiculo::getPatente()
{
    return patente;
}   
string Vehiculo::getTitular()
{
    return titular;
}  
double Vehiculo::getPrecio()
{
    return precio;
}    