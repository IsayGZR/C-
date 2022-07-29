/*	PUNTEROS ARREGLO DINAMICO
Pedir al usuario N números, 
almacenarlos en un arreglo dinámico,
posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla.
*/

#include<conio.h>
#include<iostream>

using namespace std;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main(){
	
	pedirDatos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);

	delete[] elemento;
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el numero de elementos del arreglo: "; cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i = 0; i<nElementos; i++){
		cout<<"Ingrese un numero ["<<i<<"]: ";
		cin>>*(elemento+i);	
	}
}
void ordenarArreglo(int *elemento ,int nElementos){
	int aux;
	
	for(int i=0;i<nElementos; i++){
		for(int j=0;j<nElementos-1; j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}
void mostrarArreglo(int *elemento, int nElementos){
	cout<<"\nArreglo Ordenado\n";
	
	for(int i=0; i<nElementos;i++){
		cout<<*(elemento+i)<<"  ";
	}
}
