#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta :: Cuenta(int nro, int dniTitular, double monto)
{
    numero=nro;
    Cuenta::dniTitular = dniTitular;
    saldo= monto;
}
double Cuenta::getSaldo()
{
    return saldo;
}
void Cuenta::MostrarInfo()
{
    cout<<"num: "<<numero<<endl;
    cout<<"dni: "<<dniTitular<<endl;
    cout<<"saldo: "<<saldo<<endl;
}
bool Cuenta :: Depositar(double monto)
{
    saldo+= monto;
    return true;
}
bool Cuenta::Extraer(double monto)
{
    if (saldo<monto) return false;
    saldo-= monto;
    return true;
}