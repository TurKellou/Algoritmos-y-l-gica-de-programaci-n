#include <iostream>
using namespace std;

int main() {

    int credencial, horario;
    int faltas, hora;
    string motivo, estado, nivel;

    cout<<"Responder 1 para si, 0 para no"<<endl;

    cout<<"¿El estudiante posee credencial?"<<endl;
    cin>>credencial;

    if(credencial == 0){
        estado = "No ingresa al curso";
        motivo = "No posee credencial";
        nivel = "Alto";
    }

    else{

        cout<<"¿El estudiante pertenece al curso?"<<endl;
        cin>>horario;

        if(horario == 0){
            estado = "No ingresa al curso";
            motivo = "No pertenece al curso";
            nivel = "Alto";
        }

        else{

            cout<<"¿Cuantas faltas posee?"<<endl;
            cin>>faltas;

            if(faltas >= 5){
                estado = "No ingresa al curso";
                motivo = "Posee mas de 5 faltas";
                nivel = "Alto";
            }

            else if(faltas >= 3){
                estado = "Ingresa con advertencia";
                motivo = "Posee mas de 3 faltas";
                nivel = "Moderado";
            }

            else{

                cout<<"¿Cuantos minutos de atraso tiene?"<<endl;
                cin>>hora;

                if(hora >= 10){
                    estado = "No ingresa al curso";
                    motivo = "Llego muy tarde";
                    nivel = "Alto";
                }

                else if(hora > 0){
                    estado = "Ingresa con advertencia";
                    motivo = "Llego tarde";
                    nivel = "Moderado";
                }

                else{
                    estado = "Ingresa al curso";
                    motivo = "Llego puntual";
                    nivel = "Bajo";
                }

            }

        }

    }

    cout<<"-----------ASISTENCIA-----------"<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Motivo: "<<motivo<<endl;
    cout<<"Prioridad: "<<nivel<<endl;

    return 0;
}
