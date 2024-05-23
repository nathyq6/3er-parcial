#include<iostream>
using namespace std;
int main (){

int edad,entrada,ndescuento,adescuento;
entrada=70;
cout<<"dime tu edad";
scanf("%d",&edad);

if(edad<=5){
cout<<"tiene un descuento de %60";
ndescuento=entrada*0.60;
cout<<"la entrada con el descuento seria %d\n",ndescuento;
}
if(edad>=60){;
cout<<"tiene un descuento de %55";
adescuento=entrada*0.55;
cout<<"la entrada con el descuento seria %d\n"<<adescuento<<endl;
}
return 0;

}
