#include <iostream>
using namespace std;

int main(){

float lado1, lado2, lado3, altura, angulo, area;
string tipo, tipoA;

cout<<"Ingrese valor de la base o lado 1: "<<endl;
cin>>lado1;

cout<<"Ingrese valor del lado 2: "<<endl;
cin>>lado2;

cout<<"Ingrese valor del lado 3: "<<endl;
cin>>lado3;

cout<<"Ingrese valor de la altura: "<<endl;
cin>>altura;

if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)){
    cout<<"El triángulo es valido"<<endl;

}
else
{
        cout<<"El triangulo es inválido"<<endl;
    return 0;
}

if ((lado1 == lado2)&&(lado2 == lado3)){
    tipo = "Equilatero";

    }else {
        if ((lado1 == lado2)||(lado2 == lado3)||(lado1 == lado3)){
            tipo = "Isosceles";

            }else{
                tipo = "Escaleno";

            }



if (angulo < 90){
    tipo = "Acutangulo";

    }else{
        if (angulo == 90){
        tipo = "Rectangulo";

        }else {

            tipo = "Obtusangulo";
        }
    }

    area = (lado1 * altura) / 2;

    if (altura > lado1){
        cout<<"Datos invalidos: No es valida la altura"<<endl;

    }

    cout<<"-------------------TRIANGULO----------------------"<<endl;
    cout<<"Tipo de triangulo: "<<tipo<<endl;
    cout<<"Tipo de triangulo por angulo: "<<tipoA<<endl;
    cout<<"Area: "<<area<<endl;

    return 0;
}
}
