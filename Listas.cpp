/* LISTAS */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;	
};

void menu();
void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
	
	menu();
	
	getch();
	return 0;
}
void menu(){
	float dato;
	char respuesta;
	Nodo *lista = NULL;
	int opc;
	do{
		cout<<"\tMENU\n";
		cout<<"1.-Agregar Nodo\n";
		cout<<"2.-Mostrar elementos de la lista\n";
		cout<<"3.-Calcular la suma y el promedio de los elementos\n";
		cout<<"4.-Salir\n";
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case 1:
				do{
					cout<<"\nIngrese un numero: "; cin>>dato;
					insertarLista(lista,dato); //Agregado un  nuevo elemento a la lista
					cout<<"\n\nDesea agregar otro nodo (S/N): "; cin>>respuesta;
				}while(respuesta == 'S' || respuesta == 's');
				cout<<"\n";
				system("pause");
				break;
			case 2:
				mostrarLista(lista);
				cout<<"\n\n";
				system("pause");
				break;
			case 3:
				calcularSumaPromedio(lista);
				cout<<"\n";
				system("pause");
				break;
				
		}
		system("cls");
	}while(opc != 4);
}

//Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){
		lista = nuevo_nodo;
	}
	else{
		aux = lista; //Auxiliar apunta al incio de la lista
		while(aux->siguiente != NULL){ //Recorriendo la lista
			aux = aux->siguiente; //Avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo;
	}
	
	cout<<"\nElemento "<<n<<" agregado correctamente";	
}

void mostrarLista(Nodo *lista){
	if(lista==NULL){
		cout<<"\nLa lista se encuentra vacia\n";
	}
	else{
		cout<<"\nLos elementos de la lista son los siguientes:\n\n";
		while(lista != NULL){ //Mientras no sea el final de la lista
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente; //Avanzamos una posicion en la lista
		}
	}
}

void calcularSumaPromedio(Nodo *lista){
	float suma = 0, promedio = 0;
	int cont = 0;
	
	if(lista == NULL){
		cout<<"\nLa lista esta vacia\n";
		cout<<"suma = 0 , promedio = 0\n";
	}
	else{
		while(lista != NULL){
			suma += lista->dato;
			lista = lista->siguiente;
			cont++;
		}
		promedio = suma/cont;
		
		cout<<"\nLa suma es: "<<suma<<endl;
		cout<<"El promedio es: "<<promedio<<endl;
	}
}
