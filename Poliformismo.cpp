/*POLIFORMISMO*/

#include<iostream>
#include<conio.h>
using namespace std;

class Animal{
	private:
		string nombre;
		int edad;
	public:
		Animal(string,int);
		virtual void comer();
};

class Humano : public Animal{
	private:
		string id;
	public:
		Humano(string,int,string);
		void comer();
};

class Perro : public Animal{
	private:
		string raza;
	public:
		Perro(string, int,string);
		void comer();
};

Animal::Animal(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Humano::Humano(string _nombre, int _edad, string _id) : Animal(_nombre,_edad){
	id = _id;
}

Perro::Perro(string _nombre, int _edad, string _raza) : Animal(_nombre,_edad){
	raza = _raza;
}

void Animal::comer(){
	cout<<"Yo como ";
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Humano::comer(){
	Animal::comer();
	cout<<"Sentado en la silla";
	cout<<"ID: "<<id<<endl;
}

void Perro::comer(){
	Animal::comer();
	cout<<"en el piso";
	cout<<"Raza: "<<raza<<endl;
}

int main(){
	Animal *vector[4];

	vector[0] = new Humano("Isay",20,"1809KIA");
	vector[1] = new Humano("Gerardo", 19,"GIVNIN");
	
	vector[2] = new Perro("Nala", 1, "Cruza");
	vector[3] = new Perro("Zeus", 7, "Rootweilwer");
	
	cout<<"El humano esta cominedo\n";
	vector[0]->comer();
	vector[1]->comer();
		
	cout<<"\nEl perro esta comiendo\n";
	vector[2]->comer();
	vector[3]->comer();

	
	getch();
	return 0;
}
