#include <iostream>
using namespace std;

int main(){

int monto;
int bille20 = 10, bille10 = 10, bille5 = 10, bille1 = 20;
int entre20, entre10, entre5, entre1;

int cajero = bille20*20 + bille10*10 + bille5*5 + bille1;

cout<<"Ingrese el monto a retirar: "<<endl;
cin>>monto;

if(monto <= 0){
    cout<<"Monto invalido"<<endl;
    return 0;
}

if(monto > cajero){
    cout<<"El cajero no tiene suficiente dinero"<<endl;
    return 0;
}

//Entrega de billetes de a 20
entre20 = monto / 20;
if(entre20 > bille20){
    entre20 = bille20;
}
monto = monto - (entre20*20);

//Entrega de billetes de a 10

entre10 = monto / 10;
if(entre10 > bille10){
    entre10 = bille10;
}
monto = monto - (entre10*10);

//Entrega de billetes de a 5

entre5 = monto / 5;
if(entre5 > bille5){
    entre5 = bille5;
}
monto = monto - (e5*5);

//Entrega de billetes de a 1

entre1 = monto / 1;
if(entre1 > bille1){
    entre1 = bille1;
}
monto = monto - (entre1*1);

if(monto == 0){

cout<<"----------------------------------BANCO-------------------------------"<<endl;
cout<<"Billetes entregados: "<<endl;
cout<<"$20: "<<e20<<endl;
cout<<"$10: "<<e10<<endl;
cout<<"$5: "<<e5<<endl;
cout<<"$1: "<<entre1<<endl;

}
else{
cout<<"No es posible entregar el monto exacto"<<endl;
}

return 0;
}
