#include <iostream>
using namespace std;

int main(){

    float promedio, asistencia;
    int materias, partici;
    string beca = "no", ingresos;

    cout<<"Ingrese el promedio"<<endl;
    cin>>promedio;

    cout<<"Ingrese cuantas materias perdio"<<endl;
    cin>>materias;

    cout<<"Ingrese los ingresos (Bajo/Medio/Alto)"<<endl;
    cin>>ingresos;

    cout<<"Ingrese porcentaje de asistencia"<<endl;
    cin>>asistencia;

    cout<<"Ingrese si ha participado o no (0 = No, 1 = Si)"<<endl;
    cin>>partici;

    if(promedio >= 9 && asistencia >= 90 && materias == 0){
        beca = "Beca completa";
    }
    else if(promedio >= 8 && promedio <= 8.99 && asistencia >= 85){
        beca = "Beca parcial";
    }
    else if(partici == 1 && ingresos == "Bajo"){
        beca = "Beca completa";
        if(materias >= 1){
        beca = "Ayuda de material";
    }

    }
    else if(promedio < 7 || materias > 1 || asistencia < 80){
        beca = "Sin beneficio";
    }

    cout<<"------------------BECA---------------------"<<endl;
    cout<<"Tipo de ayuda: "<<beca<<endl;
    cout<<"Razón académica: "<<materias<<" materias perdidas"<<endl;
    cout<<"Razón económica: "<<"Ingresos "<<ingresos<<endl;
    if(beca == "Beca completa"){
        cout<<"Observación: El estudiante obtuvo una beca completa, por su buen desempeño."<<endl;
    }

    if(beca == "Beca parcial"){
        cout<<"Observación: El estudiante obtuvo una beca parcial, por su desempeño."<<endl;
    }

    if(beca == "Ayuda de materiales"){
        cout<<"Observación: El estudiante obtuvo un pequeño beneficio."<<endl;
    }

    if(beca == "Sin beneficio"){
        cout<<"Observación: El estudiante no obtuvo ningun tipo de ayuda."<<endl;
    }

    return 0;
}
