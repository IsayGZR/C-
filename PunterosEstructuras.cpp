/* PUNTEROS A ESTRUCTURAS
Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: 
Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, 
comprobar cuál de los 3 tiene el mejor promedio,
posteriormente imprimir los datos del alumno.
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(){
	pedirDatos();
	calcularMejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}
void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingrese su nombre: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Ingrese su edad: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Ingrese su promedio: ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<"\n";
	}
}
void calcularMejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos = 0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno)->promedio;
			pos = i;
		}
	}
	
	cout<<"\nEl alumno con mejor promedio es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}
