#ifndef vehiculo_h
#define vehiculo_h
#include <iostream>
#include "Fecha.h"
using namespace std;
 class Vehiculo
{
    private:
        string patente;
        string marca;
        string titular;
        double precio;
    public:
        //constructor
        Vehiculo(double precio, string patente, string marca, string titular)
        {
            this->precio = precio;
            this->patente = patente;
            this->marca = marca;
            this->titular = titular;
        }
        // metodos
        void MostrarInfo(); // si quisiera que en el arreglo use los mostrarinfo de las clases hijas, lo hago virtual (virtual void MostrarInfo()) y lo sobreescribo en las hijas agregando la palabra override (void MostrarInfo() override)
        string getPatente();
        string getTitular();
        double getPrecio();
        virtual double CalcularAlquiler()=0;  // lo mando abstract para que obligue a las clases hijas a implementarlo (tambien para que al usarlo en el program, no use la clase base)
        
};

#endif