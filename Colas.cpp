/*COLAS*/

#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Cliente{
	char nombre[20];
	char clave[20];
	int edad;
};

struct Nodo{
	Cliente c;
	Nodo *siguiente;
};

void menu();
void cargar_cliente(Cliente &);
void insertarCola(Nodo *&,Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,Cliente &);


int main(){

	menu();	
			
	getch();
	return 0;
}

void menu(){
	int opc;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char rpt;
	do{
		cout<<"\tMENU\n";
		cout<<"1.-Ingresar clientes a la cola\n";
		cout<<"2.-Mostrar clientes de la cola\n";
		cout<<"3.-Salir\n";
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case 1:
				do{
					cargar_cliente(c); //Cargamos cliente
					insertarCola(frente,fin,c); //y luego lo agregamos a cola
					cout<<"Desea agregar mas clientes(s/n): ";
					cin>>rpt;
					cout<<"\n";
					system("cls");
				}while(rpt == 'S' || rpt == 's');
				cout<<"\n=== Carga de Clientes Exitosa ===\n";
				system("pause");
				break;
			case 2:
				cout<<"\nMostrando clientes:\n\n";
				while(frente != NULL){//Vaciando la cola
					suprimirCola(frente,fin,c);
					//Mostrando todos los clientes agregados
					cout<<"Nombre: "<<c.nombre<<endl;
					cout<<"Clave: "<<c.clave<<endl;
					cout<<"Edad: "<<c.edad<<endl;
					cout<<"\n";		
				}
				cout<<"\n";
				system("pause");
				break;
		}	
		system("cls");
	}while(opc != 3);
	
}
void cargar_cliente(Cliente &c){
	fflush(stdin);
	cout<<"\n\tAgregando un Nuevo Cliente"<<endl;
	cout<<"Nombre: "; cin.getline(c.nombre,20,'\n');
	cout<<"Clave: "; cin.getline(c.clave,20,'\n');
	cout<<"Edad: "; cin>>c.edad;
	cout<<"\n";
}

// Funcion para agregar elementos a la cola
void insertarCola(Nodo *&frente, Nodo *&fin,Cliente c){
	Nodo *nuevo_nodo=new Nodo();
	
	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;

}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true: false;
}

// Funcion para elimiar elementos de un cola
void suprimirCola(Nodo *&frente, Nodo *&fin, Cliente &c){
	c = frente->c;
	Nodo *aux  = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else {
		frente = frente->siguiente;
	}
	
	delete aux;	
}
