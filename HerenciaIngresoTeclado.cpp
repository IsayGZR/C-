/*HERENCIA DATOS INGRESADOR POR EL TECLADO DEL USUARIO*/

#include<iostream>
#include<conio.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void mostrarPersona();
};

class Empleado : public Persona{
	private:
		string nss;
		float salario;
	public:
		Empleado(string, int, string, float);
		void mostrarEmpleado();
};

class Estudiante : public Persona{
	private:
		string id;
		float notaFinal;
	public:
		Estudiante(string, int, string, float);
		void mostrarEstudiante();
};

class Universitario : public Estudiante{
	private:
		string universidad;
		string carrera;
	public:
		Universitario(string,int,string,float,string,string);
		void mostrarUniversitario();
};

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(string _nombre, int _edad,string _nss, float _salario) : Persona(_nombre, _edad){
	nss = _nss;
	salario = _salario;
}

Estudiante::Estudiante(string _nombre, int _edad, string _id, float _notaFinal) : Persona(_nombre,_edad){
	id = _id;
	notaFinal = _notaFinal;
}

Universitario::Universitario(string _nombre, int _edad, string _id, float _notaFinal, string _universidad, string _carrera) : Estudiante(_nombre,_edad,_id,_notaFinal){
	universidad = _universidad;
	carrera = _carrera;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"NSS: "<<nss<<endl;
	cout<<"Salario: "<<salario<<endl;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"ID: "<<id<<endl;
	cout<<"Nota final: "<<notaFinal<<endl;
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Universidad: "<<universidad<<endl;
	cout<<"Carrera: "<<carrera<<endl;
}

int main(){
	string nombre,nss,id,carrera,universidad;
	int edad;
	float notaFinal,salario;
	
	cout<<"INGRESE LOS DATOS DEL EMPLEADO\n";
	cout<<"Nombre: ";
	getline(cin,nombre);
	cout<<"Edad: "; 
	cin>>edad;
	fflush(stdin);
	cout<<"NSS: "; 
	getline(cin,nss);
	cout<<"Salario: "; 
	cin>>salario;
	Empleado empleado1(nombre,edad,nss,salario);
	
	cout<<"\nImprimiendo los datos del empleado\n";
	empleado1.mostrarEmpleado();
	
	cout<<"\nINGRESE LOS DATOS DEL ESTUDIANTE\n";
	fflush(stdin);
	cout<<"Nombre: ";
	getline(cin,nombre);
	cout<<"Edad: "; 
	cin>>edad;
	fflush(stdin);
	cout<<"ID: ";
	getline(cin,id);
	cout<<"Nota final: ";
	cin>>notaFinal;
	Estudiante estudiante1(nombre,edad,id,notaFinal);
	
	cout<<"\nImprimiendo los datos del estudiante\n";
	estudiante1.mostrarEstudiante();
	
	cout<<"\nINGRESE LOS DATOS DEL UNIVERSITARIO\n";
	fflush(stdin);
	cout<<"Nombre: ";
	getline(cin,nombre);
	cout<<"Edad: "; 
	cin>>edad;
	fflush(stdin);
	cout<<"ID: ";
	getline(cin,id);
	cout<<"Nota final: ";
	cin>>notaFinal;
	fflush(stdin);
	cout<<"Universidad: ";
	getline(cin,universidad);
	fflush(stdin);
	cout<<"Carrera: ";
	getline(cin, carrera);
	Universitario universitario1(nombre,edad,id,notaFinal,universidad,carrera);

	cout<<"\nImprimiendo los datos del universitario\n";
	universitario1.mostrarUniversitario();
	
	getch();
	return 0;
}
