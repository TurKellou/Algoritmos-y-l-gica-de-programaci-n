#include <iostream>
using namespace std;

int main(){

int estudiantes, dias, alimentacion, coordinador;
float hospedajeDia, transporte;
float costoTransporte, costoHospedaje, costoAlimentacion;
float total, descuento, totalEstudiante;

cout<<"Ingrese numero de estudiantes: "<<endl;
cin>>estudiantes;

cout<<"Ingrese numero de dias del viaje: "<<endl;
cin>>dias;

cout<<"Ingrese costo de hospedaje por dia: "<<endl;
cin>>hospedajeDia;

cout<<"Incluye alimentacion? (1=Si 0=No): "<<endl;
cin>>alimentacion;

cout<<"Hay coordinador gratis? (1=Si 0=No): "<<endl;
cin>>coordinador;

if(estudiantes > 20){
    transporte = 15;
}
else{
    transporte = 20;
}

costoTransporte = estudiantes * transporte;

if(coordinador == 1){
    costoTransporte = costoTransporte - transporte;
}

costoHospedaje = estudiantes * hospedajeDia * dias;

if(dias > 3){
    costoHospedaje = costoHospedaje * 0.9;
}

if(alimentacion == 1){
    costoAlimentacion = estudiantes * 10 * dias;
}
else{
    costoAlimentacion = 0;
}

total = costoTransporte + costoHospedaje + costoAlimentacion;

if(total > 1000){
    descuento = total * 0.1;
}
else{
    descuento = 0;
}

total = total - descuento;

totalEstudiante = total / estudiantes;

cout<<"Costo transporte: "<<costoTransporte<<endl;
cout<<"Costo hospedaje: "<<costoHospedaje<<endl;
cout<<"Costo alimentacion: "<<costoAlimentacion<<endl;
cout<<"Descuento: "<<descuento<<endl;
cout<<"Total general: "<<total<<endl;
cout<<"Total por estudiante: "<<totalEstudiante<<endl;

if(totalEstudiante > 200){
    cout<<"Viaje no recomendable"<<endl;
}
else{
    cout<<"Viaje recomendable"<<endl;
}

return 0;
}
