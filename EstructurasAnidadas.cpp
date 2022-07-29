	/*ARREGLO DE ESTRUCUTURAS ANIDADAS
1.-Crear dos estructuras una se llamara promedio con los siguientes campos: 
	1.1-nota1
	1.2-nota2
	1.3-nota3
2.-Crear otra funcion llamada Alumno y se solicitaran los siguientes datos:
	2.1-Nombre.
	2.2-Sexo.
	2.3-Edad.
	2.4-El promedio estará anidada a la estructura alumno.
3.-Se solicitara que el usuario ingrese por teclado en numero de alumnos.
4.-Se pedirá que ingrese los datos antes mencionados.
5.-Calcular cual es el alumno que tiene el mejor promedio.
6.-Mostrar en pantalla dicho alumno*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio{
	float nota1, nota2, nota3;
	float alumno_promedio;
};
struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno[100];

int main(){
	int numalum, mayor, pos;
	
	cout<<"Ingrese el numero de alumnos: "; cin>>numalum;
	
	for(int i=0; i<numalum; i++){
		
		fflush(stdin);
		cout<<"DATOS\n";
		cout<<"Nombre: ";
		cin.getline(alumno[i].nombre, 20, '\n');
		cout<<"Sexo: ";
		cin.getline(alumno[i].sexo, 10, '\n');
		cout<<"Edad: ";
		cin>>alumno[i].edad;
		
		cout<<"\nNOTAS\n";
		cout<<"Nota 1: "; cin>>alumno[i].prom.nota1;
		cout<<"Nota 2: "; cin>>alumno[i].prom.nota2;
		cout<<"Nota 3: "; cin>>alumno[i].prom.nota3;
	
		alumno[i].prom.alumno_promedio = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
		cout<<"\n\n";
		
		if(alumno[i].prom.alumno_promedio > mayor){
			mayor = alumno[i].prom.alumno_promedio;
			pos = i;
		}
	}
	
	cout<<"\nALUMNO CON EL MAYOR PROMEDIO\n";
	cout<<"Nombre: "<<alumno[pos].nombre<<endl;
	cout<<"Sexo: "<<alumno[pos].sexo<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<alumno[pos].prom.alumno_promedio<<endl;
	
	getch();
	return 0;
	
	
}
