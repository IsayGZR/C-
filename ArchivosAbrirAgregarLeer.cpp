/*CREER ARCHIVOS - ABRIR ARCHIVOS - AGREGAR TEXTO A ARCHIVOS - LEER ARCHIVOS*/

#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>

using namespace std;

void menu();
void abrir();
void agregar();
void leer();

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opc;
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1.-Crear un archivo\n";
		cout<<"2.-Agregar texto a un archivo\n";
		cout<<"3.-Leer un archivo\n";
		cout<<"4.-Salir\n";
		cout<<"Opcion?: ";
		cin>>opc;
		switch(opc){
			case 1:
				abrir();
				cout<<"\nSe a creado el archivo exitosamente\n";
				system("pause");
				break;
			case 2:
				agregar();
				system("pause");
				break;
			case 3:
				leer();
				system("pause");
				break;
		}
		system("cls");
	}while(opc != 4);
}

void abrir(){
	ofstream archivo;
	string nombreArchivo;
	char opc;
	
	fflush(stdin);
	cout<<"Ingrese el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::out); //Abrir el archivo para lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo.close();	
}

void agregar(){
	ofstream archivo;
	string frase, nombreArchivo;
	char opc;
	
	fflush(stdin);
	cout<<"Ingrese el nombre del archivo al cual se le agregara texto: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::app);
	
	do{
		fflush(stdin);
		cout<<"Ingrese un texto al archivo:\n";
		getline(cin,frase);
		archivo<<frase;
		cout<<"\nQuieres agregar otra frase (S/N): "; cin>>opc;	
	}while(opc=='s' || opc=='S');
	
	archivo.close();
}

void leer(){
	ifstream archivo;
	string nombreArchivo, texto;
	
	fflush(stdin);
	cout<<"Ingrese el nombre del archivo: ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(), ios::in); //Abrir el archivo para lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
}
