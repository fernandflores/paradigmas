#include "auto.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

void Auto::MostrarInfo()
{
    Vehiculo::MostrarInfo();
    cout<<"modelo= "<<modelo<<endl;
    cout<<"vencimientoRto= "<<vencimientoRto.toString()<<endl;
    cout<<"capacidad= "<<capacidad<<endl;
}

int Auto::CalcularAntiguedad()
{
    Fecha fechaActual= Fecha();
    fechaActual.setFechaActual();
    int antiguedad = fechaActual.getAnio() - modelo;
    return antiguedad;

}
bool Auto::EsRtoVigente()
{
    Fecha fechaActual= Fecha();
    if (fechaActual<vencimientoRto)
        return true;
    else
        return false;
}
double Auto::CalcularAlquiler()
{
    double aux= Vehiculo::getPrecio();
    if (capacidad>=5)
    {
        aux*=1.25;
    }
    if (CalcularAntiguedad()<5)
    {
        aux*=1.3;
    }
    return aux;
}