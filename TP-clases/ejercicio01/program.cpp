#include "Cuenta.h"
#include <iostream>
using namespace std;
bool transferir(Cuenta &c1, Cuenta &c2, double monto);

int main()
{
    int num;
    Cuenta c1(1,41250,250);
    Cuenta c2(2,9090,800);
    c1.MostrarInfo();
    c2.MostrarInfo();
    c1.Depositar(250);
    cout<<"mostrando info luego de depositar 250 en c1"<<endl;
    c1.MostrarInfo();
    transferir(c1,c2,300);    
    cin>>num;    

    return 0;
}
bool transferir(Cuenta &c1, Cuenta &c2, double monto) // c1 transfiere a c2
{
    if (monto>c1.getSaldo()) return false;
    c1.Extraer(monto);
    c2.Depositar(monto);
    return true;
}
