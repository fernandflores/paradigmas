#ifndef Cuenta_h
#define Cuenta_h
#include <iostream>
using namespace std;
class Cuenta
{
    private:
        int numero;
        int dniTitular;
        double saldo;
    public:
        //constructor 
        Cuenta(int num, int dni, double monto);
        //getters
        double getSaldo();
        // metodos
        void MostrarInfo();
        bool Depositar(double monto);
        bool Extraer(double monto);

};
#endif