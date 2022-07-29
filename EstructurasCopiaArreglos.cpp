/*	ESTRUCTURAS CON COPIADO DE ARREGLOS
Introducir por teclado el numero de personas, pedir su nombre y se padece de alguna discapacidad,
pegar en otro arreglo tanto las personas con discapacidad como las que no tienen discapacidad,
por ultimo imprimir las personas clasificadas en personas con discapacidad y personas sin discapacidad*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona_discapacidad{
	char nombre[30];
	bool discapacidad;
}personas[50],personasConD[50],personasSinD[50];


int main(){
	int n_personas,j=0,k=0;
	
	cout<<"Introduzca el numero de personas: "; cin>>n_personas;
	cout<<"\n";
	for(int i=0;i<n_personas;i++){
		fflush(stdin);
		cout<<"Nombre : "; cin.getline(personas[i].nombre,30,'\n');
		cout<<"Padece de alguna discapacidad\n0.-SI\n1.-NO:  "; cin>>personas[i].discapacidad;

		if(personas[i].discapacidad == 0){
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++;
		}
		else{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++;
		}
		cout<<"\n";
	}
	

	cout<<"\nPersonas con Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personasConD[i].nombre<<endl;
	}

	cout<<"\nPersonas sin Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personasSinD[i].nombre<<endl;
	}
	getch();
	return 0;
}
