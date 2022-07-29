//METODOS CONSTRUCTORES Y MODIFICADORES (GETTERS Y STTERS)
#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Punto{
	private:
		int num1, num2;
	public:
		Punto();
		void setPunto(int, int);
		int getPuntoN1();
		int getPuntoN2();
};

Punto::Punto(){
	
}

void Punto::setPunto(int _num1,int _num2){
	num1 = _num1;
	num2 = _num2;
}

int Punto::getPuntoN1(){
	return num1;
}

int Punto::getPuntoN2(){
	return num2;
}

int main(){
	Punto numeros;
	
	numeros.setPunto(15,10);
	
	cout<<numeros.getPuntoN1()<<endl;
	cout<<numeros.getPuntoN2()<<endl;
	
	getch();
	return 0;
}
