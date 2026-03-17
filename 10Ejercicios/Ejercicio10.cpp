#include <iostream>
using namespace std;

int main(){

int mision1, mision2, mision3, error, tiempo, especial, vida, puntos, boni = 0;
string rango, obs;

cout<<"Ingrese puntos de la misión 1: "<<endl;
cin>>mision1;

cout<<"Ingrese puntos de la misión 2: "<<endl;
cin>>mision2;

cout<<"Ingrese puntos de la misión 3: "<<endl;
cin>>mision3;

cout<<"Ingrese numero de errores cometidos: "<<endl;
cin>>error;

cout<<"Ingrese tiempo de juego: "<<endl;
cin>>tiempo;

cout<<"Ingrese si encontró un objeto especial ""(1 para si, 0 para no)"": "<<endl;
cin>>especial;

cout<<"Ingrese si perdio una vida ""(1 para si, 0 para no)"": "<<endl;
cin>>vida;

puntos = mision1 + mision2 +  mision3 - (100 * error);

    if (especial == 1){
        boni += 250;
    }

    if(tiempo < 30){
        boni += 300;
    }

    if(puntos < 0){
        puntos = 0;
    }


    if (puntos <= 450){
        rango = "Novato";
        obs = "Vamos mejorando";
    }


    else if (puntos <= 650){
        rango = "Aprendiz";
        obs = "Sigue así, vamos bien";
    }


    else if (puntos <= 750){
        rango = "Avanzado";
        obs = "Eres un jugador costante";
    }


    else if (puntos <= 850){
        rango = "Experto";
        obs = "Eres un jugador habilidoso";
    }


    else if (puntos >= 900 && vida == 0){
        rango = "Legendario";
        obs = "Eres un jugador excepcional";
    }

    else {
        rango = "No alcanzado";
        obs = "Sera la proxima";
    }

    cout<<"----------------------------RESULTADO-------------------"<<endl;
    cout<<"PUNTOS: "<<endl;
    cout<<""<<endl;
    cout<<"MISION 1: "<<mision1<<endl;
    cout<<"MISION 2: "<<mision2<<endl;
    cout<<"MISION 3: "<<mision3<<endl;
    cout<<""<<endl;
    cout<<"PENALIZACIONES: "<<error<<endl;
    cout<<"RANGO ALCANZADO: "<<rango<<endl;
    cout<<"OBSERVACION:  "<<obs<<endl;


    return 0;
}
