#include <iostream>

using namespace std;

int main(){

int lecturaA, lecturaR, tipo, habita, artefactos, kilo, consumo;
float precio, subtotal, total, deuda, recargo = 0, subsidio = 0;
string aviso;

cout<<"Ingrese el valor de la lectura anterior de la vivienda: "<<endl;
cin>>lecturaA;

cout<<"Ingrese el valor de la lectura reciente de la vivienda: "<<endl;
cin>>lecturaR;

    if (lecturaA > lecturaR){
        cout<<"Valores de lecturas invalidos"<<endl;
        return 0;
    }

    consumo = lecturaR - lecturaA;

    cout<<"Tipo de vivienda (1 para social, 2 para normal): "<<endl;
    cin>>tipo;

    cout<<"Numero de habitantes: "<<endl;
    cin>>habita;

    cout<<"¿Posee artefactos de alto consumo? (1=Si 0=No): "<<endl;
    cin>>artefactos;

    cout<<"¿Posee alguna deuda anterior? (1=Si 0=No): "<<endl;
    cin>>deuda;

    if(consumo <= 100){
        precio = 0.15;
    }

    else if(consumo <= 300){
        precio = 0.25;
    }

    else{
        precio = 0.35;
    }


    subtotal = consumo * precio;


    if (deuda == 1){
        recargo = subtotal * 0.10;
    }

    if(tipo == 1 && consumo <=100){
        subsidio = subtotal * 0.15;
    }

    total = subtotal + recargo - subsidio;

    cout<<"------------------------------FACTURA------------------------------"<<endl;
    cout<<"Consumo total: "<<consumo<<endl;
    cout<<"Costo base: "<<subtotal<<endl;
    cout<<"Subsidio: "<<subsidio<<endl;
    cout<<"Recargo: "<<recargo<<endl;
    cout<<""<<endl;
    cout<<"TOTAL: "<<total<<endl;
    cout<<""<<endl;

    if (consumo/habita > 70){
        aviso = "ALERTA: Consumo excesivo";
    }

    else if (artefactos == 1 && consumo >= 250){
        aviso = "ALERTA: Riesgo de sobrefacturación";
    }

    return 0;
}
