/* PILAS */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);

int main(){
	Nodo *pila = NULL;
	char dato;
	int opc;
	
	cout<<"\tMENU"<<endl;
	cout<<"1.-Insertar un caracter a la pila\n";
	cout<<"2.-Mostrar todos lo elementos de la pila\n";
	cout<<"3.-Salir\n";
	cout<<"Opcion: ";
	cin>>opc;
	
	while(opc != 3){
		if(opc==1){
			cout<<"Ingrese un caracter: "; cin>>dato;
			agregarPila(pila, dato);
			cout<<"\n";
			system("pause");
		}
		else if(opc==2){
			cout<<"\nMostrando todos los elementos de pila\n";
			while(pila != NULL){
				sacarPila(pila, dato);
				if(pila != NULL){
					cout<<dato<<" , ";
				}
				else{
					cout<<dato<<".";
				}
			}
			cout<<"\n";
			system("pause");	
		}
		else if(opc==3){
			cout<<"\nSaliendo\n";
		}
		
		system("cls");
		cout<<"\nIngrese una opcion: "<<endl;
        cout<<"1.Insertar un elemento en la pila."<<endl;
        cout<<"2.Mostrar todos los elementos en la pila."<<endl;
        cout<<"3.Salir."<<endl;
        cin>>opc;
	}
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo =new Nodo;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" a sido agregado a la pila correctamente"<<endl;
}

void sacarPila(Nodo *&pila, char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
