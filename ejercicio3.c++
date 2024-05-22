#include<iostream>
using namespace std;

int main (){
float num1,num2,num3;

cout<<"ingrese el primer numero";
cin>>num1;
cout<<"ingrese el segundo numero";
cin>>num2;
cout<<"ingrese el tercer numero";
cin>>num3;

if (num1 <= num2 && num1 <= num3) {
    if (num2 <= num3) {
      cout<<num1<< " " <<num2<< " " <<num3<<endl;
    } else {
      cout<<num1<< " " <<num3<< " " <<num2<<endl;
    }
  } else if (num2 <= num1 && num2 <= num3) {
    if (num1 <= num3) {
      cout<<num2<< " " <<num1<< " " <<num3<<endl;
    } else {
      cout<<num2<< " " <<num3<< " " <<num1<<endl;
    }
  } else {
    if (num1 <= num2) {
      cout<<num3<< " " <<num1<< " " <<num2<<endl;
    } else {
      cout<<num3<< " " <<num2<< " " <<num1<<endl;
    }
  }

return 0;
}