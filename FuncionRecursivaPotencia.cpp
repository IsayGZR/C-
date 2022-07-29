/*CREAR UN FUNCION RECURSIVA
Escriba una función recursiva para calcular un número elevado a una potencia entera mayor o igual que cero: x^y.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int potencia(int,int);

int main(){
	int base,exponente;
	cout<<"Ingrese la base: "; cin>>base;
	cout<<"Ingrse el exponente: "; cin>>exponente;
	
	cout<<"\n"<<base<<" Elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	
	getch();
	return 0;
}
int potencia(int x,int y){
	int pot=0;
	if(y==1){
		pot = x;
	}
	else{
		pot = x * potencia(x,y-1);
	}
}
