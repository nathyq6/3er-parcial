#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"dime el primer numero";
cin>>num1;
cout<<"dime el segundo numero";
cin>>num2;
cout<<"dime el tercer numero";
cin>>num3;

if(num1==1 && num2==2 && num3==3){
cout<<"acceso permitido"<<endl;
}
else{
cout<<"acceso denegado"<<endl;
}

return 0;
}