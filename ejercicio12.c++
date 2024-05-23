#include <iostream>
using namespace std;

int main() {

int num1,num2,total;

cout<<"dime el primer numero";
cin>>num1;
cout<<"dime el segundo numero";
cin>>num2;
total=num1%num2;
cout<<"el total de la division es %d\n"<<total<<endl;
if(total-0){;
cout<<" %d el numero no es divisible\n";
}
else{
cout<<"el numero es divisible\n";


}
return 0;
}
