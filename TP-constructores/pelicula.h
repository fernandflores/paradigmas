#ifndef pelicula_h
#define pelicula_h
#include <iostream>
using namespace std;

class Pelicula
{
    private:
        static int autonumerico;
        int id;
        const string titulo; // nunca modifco titulo: es const
        string director; // no es const porque tiene un setter
        bool estreno;
        const float precioBase;
        const char tipoPelicula;
    public:
        Pelicula();
        Pelicula(string titulo, string director, bool estreno, float precioBase, char tipoPelicula);
        Pelicula(const Pelicula &p); // constructor de copia
        static int getAutonumerico();
        void setDirector(string director);
        void mostrarInfo() const;
        float calcularPrecioFinal() const; // es const porque no modifica ningun atributo(calcula el precio y solo muestra el resultado, sin asignarlo a ningun atributo)
        string getTitulo() const;
        ~Pelicula();

};



#endif