#include <iostream>

using namespace std;

int main(){

float nota1, nota2, nota3, asistencia, promedio;
int proFinal, plagio;
string estado = "Sin definir", obsD = "Ninguna", obsR = "Ninguna";

cout<<"Ingrese nota 1: "<<endl;
cin>>nota1;

cout<<"Ingrese nota 2: "<<endl;
cin>>nota2;

cout<<"Ingrese nota 3: "<<endl;
cin>>nota3;

cout<<"Ingrese porcentaje de asistencia: "<<endl;
cin>>asistencia;

cout<<"¿Entregó el proyecto final? (si = 1, no = 0)"<<endl;
cin>>proFinal;

cout<<"¿Cometió plagio? (si = 1, no = 0)"<<endl;
cin>>plagio;

promedio = (nota1 + nota2 + nota3)/3;

if(plagio == 1){
    estado = "Reprobado automaticamente";
    obsD = "Comete plagio";
}

else if(proFinal == 0){
    estado = "Recuperacion";
    obsD = "No presenta el proyecto";
}

else if(asistencia < 70){
    estado = "Reprobado";
    obsD = "Asistencia insuficiente";
}

else if((nota1 >= 9 && nota2 >= 9 && nota3 >= 9) && asistencia >= 95){
    estado = "Aprobado";
    obsD = "Muy disciplinado";
    obsR = "Rendimiento excelente";
}

else if(promedio >= 7){
    estado = "Aprobado";
}

else if(promedio >= 5 && promedio <= 6.99){
    estado = "Recuperacion";
}

else{
    estado = "Reprobado";
}

if((nota1 == 10 || nota2 == 10 || nota3 == 10) &&
   (nota1 < 4 || nota2 < 4 || nota3 < 4)){
    obsR = "Rendimiento irregular";
}

cout<<"------------------------------CALIFICACIONES------------------------------"<<endl;
cout<<"Notas: "<<nota1<<" "<<nota2<<" "<<nota3<<endl;
cout<<"Promedio: "<<promedio<<endl;
cout<<"Estado academico: "<<estado<<endl;
cout<<"Observacion disciplinaria: "<<obsD<<endl;
cout<<"Observacion de rendimiento: "<<obsR<<endl;

return 0;
}
