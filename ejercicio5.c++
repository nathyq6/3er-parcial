#include <iostream>
using namespace std;

int main() {
  float horasTrabajadas,precioHora,salarioNormal,horasExtra,precioHoraExtra,salarioExtra,salarioTotal;

  
  cout<<"Ingrese las horas trabajadas: ";
  cin>>horasTrabajadas;
  cout<<"Ingrese el precio por hora: ";
  cin>>precioHora;

  
  if (horasTrabajadas <= 40) {
    salarioNormal = horasTrabajadas * precioHora;
  } else {
    salarioNormal = 40 * precioHora;
  }

  
  if (horasTrabajadas > 40) {
    horasExtra = horasTrabajadas - 40;
  } else {
    horasExtra = 0;
  }

  
  precioHoraExtra = precioHora * 1.5;


  if (horasExtra <= 10) {
    salarioExtra = horasExtra * precioHoraExtra;
  } else {
    salarioExtra = 10 * precioHoraExtra + (horasExtra - 10) * precioHora * 2;
  }
salarioTotal = salarioNormal + salarioExtra;

  
  cout<<"El salario total es " << salarioTotal <<endl;//aqui marca un error //ya corregi el error
   
  return 0;
}

  
