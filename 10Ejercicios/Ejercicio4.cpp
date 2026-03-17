#include <iostream>

using namespace std;

int main (){

int hojas, tipoI, cargo, horario, anillado;
float precio, subtotal, total, descuento = 0, recargo = 0, anilla = 0;

cout<<"Ingrese número de hojas a imprimir: "<<endl;
cin>>hojas;

cout<<"Seleccione tipo de impresion ""(1 para color, 2 para blanco y negro)"": "<<endl;
cin>>tipoI;

cout<<"Ingrese su cargo ""(1 para estudiante, 2 para docente)"": "<<endl;
cin>>cargo;

cout<<"Ingrese el horario cuando esta imprimiendo ""(1 para normal, 2 para nocturno)"": "<<endl;
cin>>horario;

cout<<"Ingresa si lleva anillado ""(1 para si, 2 para no)"": "<<endl;
cin>>anillado;

if(hojas <= 20){
    precio = 0.05;
}

else if (hojas <= 100){
    precio = 0.04;
}

else {
    precio = 0.03;
}

//Color o blanco y negro

if(tipoI == 1){
    precio = precio * 2;
}

else {
        precio = precio + 0;
}
//Subtotal

subtotal = hojas * precio;

//Cargo

if(cargo == 2){
    descuento = subtotal * 0.05;
}

if(cargo == 1 && hojas > 50){
    descuento = subtotal * 0.08;
}

//Recargo de horario

if(horario == 2){
    recargo = subtotal * 0.25;
}

//Valor de anillado

if(anillado == 1){
    anilla = 1;

    if(hojas > 75){
        anilla = anilla * 0.8;
    }
}

total = subtotal - descuento + recargo + anilla;

cout<<"------------------------------------FACTURA-----------------------------------"<<endl;
cout<<""<<endl;
cout<<"Total de hojas: "<<hojas<<"             Valor por hoja: "<<precio<<endl;
cout<<""<<endl;
cout<<"Subtotal: "<<subtotal<<endl;
cout<<"Descuento: "<<descuento*100<<"%"<<endl;
cout<<"Recargo: "<<recargo<<endl;
cout<<"Valor de anillado: "<<anilla<<endl;
cout<<""<<endl;
cout<<"TOTAL: "<<total<<endl;

return 0;
}
