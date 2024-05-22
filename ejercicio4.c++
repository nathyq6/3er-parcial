#include<iostream>
using namespace std;
int main(){

char letra;

cout<<"dime un caracter";
cin>>letra;

switch(letra){

case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
cout<<"%c es una vocal\n"<<letra<<endl;
break;
default:
	cout<<"%c no es una vocal\n"<<letra<<endl;


}
return 0;
}