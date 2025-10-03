#ifndef moto_h
#define moto_h
#include <iostream>
#include "vehiculo.h"
using namespace std;
class Moto : public Vehiculo
{
    private:
        int cilindrada;
    public:
        //constructor : vehiculo llama al constructor de la clase base
        Moto(double precio, string patente, string marca, string titular, int cc):Vehiculo(precio,patente,marca,titular)
        {
            this->cilindrada = cc;
        }   
        //metodos
        int getCilindrada();
        double CalcularAlquiler();
        void MostrarInfo();
};

#endif