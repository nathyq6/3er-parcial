#include<iostream>
using namespace std;
int main(){
int num,num1,num2,num3,num4,num5;
int menor,i;

cout<<"dime el primer numero";
cin>>num1;
cout<<"dime el segundo numero";
cin>>num2;
cout<<"dime el tercer numero";
cin>>num3;
cout<<"dime el cuarto numero";
cin>>num4;
cout<<"dime el quinto numero";
cin>>num5;

num=num1;

if(num2<num){;
num=num2;
}
if(num3<num){;
num=num3;
}
if(num4<num){;
num=num4;
}
if(num5=num){;
num=num5;
}

cout<<"el menor es"<<num<<endl;
return 0;
}