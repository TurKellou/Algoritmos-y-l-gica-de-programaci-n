#include <iostream>
using namespace std;

int main(){

int inicial, comprados, vendidos, devueltos, danados, stockFinal;
float precioCompra, precioVenta;
float ingresos, egresos, perdidas, utilidad;

cout<<"Stock inicial: "<<endl;
cin>>inicial;

cout<<"Cantidad comprada: "<<endl;
cin>>comprados;

cout<<"Cantidad vendida: "<<endl;
cin>>vendidos;

cout<<"Cantidad devuelta: "<<endl;
cin>>devueltos;

cout<<"Cantidad danada o perdida: "<<endl;
cin>>danados;

cout<<"Precio de compra: "<<endl;
cin>>precioCompra;

cout<<"Precio de venta: "<<endl;
cin>>precioVenta;

stockFinal = inicial + comprados - vendidos + devueltos - danados;

if(stockFinal < 0){
    cout<<"Error: Valor de stock negativo"<<endl;
    return 0;
}

ingresos = (vendidos - devueltos) * precioVenta;
egresos = comprados * precioCompra;
perdidas = danados * precioCompra;

utilidad = ingresos - egresos - perdidas;

cout<<"Stock final: "<<stockFinal<<endl;
cout<<"Ingresos por ventas: "<<ingresos<<endl;
cout<<"Egresos por compras: "<<egresos<<endl;
cout<<"Perdidas: "<<perdidas<<endl;
cout<<"Utilidad final: "<<utilidad<<endl;

if(stockFinal < 10){
    cout<<"Reponer urgentemente"<<endl;
}

if(utilidad < 0){
    cout<<"Dia no rentable"<<endl;
}

return 0;
}
