/*	FUNCIONES-CREAR UNA FUNCION CAMBIO
Introducir por teclado el numero de dolares y convertir el valor en el número menor de billetes equivalentes.
100, 50, 20,10 ,5 ,1.
*/

#include<iostream>
#include<conio.h>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
	int num1,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	cout<<"Dolares en billetes"<<endl;
	cout<<"Digite una cantidad de dolares: "; cin>>num1;
	
	cambio(num1,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"\nBilletes\n";
	cout<<"$100:"<<cien<<endl<<"$50:"<<cincuenta<<endl<<"$20:"<<veinte<<endl<<"$10:"<<diez<<endl<<"$5:"<<cinco<<endl<<"$1:"<<uno<<endl;
	
	getch();
	return 0;
} 

void cambio(int num1, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien=num1/100; num1%=100; 
	cincuenta=num1/50; num1%=50;
	veinte=num1/20; num1%=20;
	diez=num1/10; num1%=10;
	cinco=num1/5; num1%=5;
	uno=num1;
}
