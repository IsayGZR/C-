/*ARCHIVOS AGREGAR TEXTO*/

#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>

using namespace std;

void leer();

int main(){
	
	leer();
	
	getch();
	return 0;
}

void leer(){
	ofstream archivo;
	string texto, nombreArchivo;
	
	cout<<"Ingrese el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::app); //Abrir el archivo para agregar texto
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Ingrese el texto que quiere aniadir: ";
	getline(cin,texto);
	archivo<<texto<<endl;
	
	archivo.close(); //Cerra el archivo
}
