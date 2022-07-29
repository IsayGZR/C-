/*CLASES CALCULAR AREA PERIMETRO DE UN RECTANGULO*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Rectangulo{
	private:
		float largo, ancho;
	public:
		Rectangulo(float, float);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::area(){
	float area;
	area = largo * ancho;
	cout<<"\nEl area es: "<<area;
}
void Rectangulo::perimetro(){
	float perimetro;
	perimetro = (largo * 2) + (ancho * 2);
	cout<<"\nEL perimetro es: "<<perimetro;	
}

int main(){
	Rectangulo r1(7,5);
	Rectangulo r2(10.8, 5);
	Rectangulo r3(11,7);
	
	r1.area();
	r1.perimetro();
	
	r2.area();
	r2.perimetro();
	
	r3.area();
	r3.perimetro();
	
	getch();
	return 0;
}
