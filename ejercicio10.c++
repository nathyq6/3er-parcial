#include<iostream>
using namespace std;

int main(){

int num,contador=0,lim=0;

do{
cout<<"dime un numero";
cin>>num;

if (num!=0){
cout<<"has introducido el numero"<<num<<endl;

contador++;
lim+=num;
}
} while(num!=0);
cout<<"finalizado se a ingresado " << contador << " numeros "<<endl;
cout<<"la suma de los numeros es "<< lim<<endl;



return 0;
}