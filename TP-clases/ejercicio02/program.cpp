#include "moto.h"
#include "vehiculo.h"
#include "auto.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

int main()
{
    Auto auto1= Auto(250, "aha310","renault","fernando",1999,Fecha(10,05,2025),5);
    Moto moto1= Moto(150,"abc123","honda","juan",600);
    Vehiculo *vehiculos [4];
    vehiculos[0]= new Auto(500,"ad124gs","chevrolet","luis",2017,Fecha(20,11,2025),4);
    vehiculos[1]= new Moto(200,"xzs456","yamaha","ana",300);
    vehiculos[2]= new Auto(100,"ypf123","ford","pepito",2020,Fecha(15,8,2025),8);
    vehiculos[3]= new Auto(250, "aha310","renault","fernando2",1999,Fecha(10,05,2025),5);

    auto1.MostrarInfo();
    cout<<"El alquiler del auto es: "<<auto1.CalcularAlquiler()<<endl;
    cout<<endl;
    moto1.MostrarInfo();
    cout<<"El alquiler de la moto es: "<<moto1.CalcularAlquiler()<< endl;
    cout<<endl;
    cout<<"Mostrando informacion de los vehiculos del arreglo: "<<endl;
    for (int i=0; i<4; i++)
    {
        vehiculos[i]->MostrarInfo();
        cout<<endl;
        cout<<"el precio del alquiler del vehiculo: "<<i<<" es:"<<vehiculos[i]->CalcularAlquiler()<<endl;
        cout<<endl;
    }
    int num;
    cin>>num;
    return 0;
}