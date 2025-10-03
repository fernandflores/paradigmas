#ifndef Auto_h
#define Auto_h
#include <iostream>
#include "Fecha.h"
#include "vehiculo.h"
using namespace std;
class Auto : public Vehiculo
{
    private:
        int modelo;
        Fecha vencimientoRto;
        int capacidad;
    public:
        //constructor
        Auto(double precio, string patente, string marca, string titular, int modelo, Fecha vencimientoRto, int capacidad):Vehiculo(precio, patente, marca, titular)
        {
            this->modelo = modelo;
            this->vencimientoRto = vencimientoRto;
            this->capacidad = capacidad;
        }
        // metodos
        void MostrarInfo();
        int CalcularAntiguedad();
        bool EsRtoVigente();
        double CalcularAlquiler();
};

#endif