//Matriz llenado Aleatorio

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int n[100][100], nueva[100][100], filas, columnas,dato;
	
	cout<<"Ingrese el numero de filas "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	
	srand(time(NULL));
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			dato = 1 +rand()%(100); //Generar numeros aletarorios entre 1-100
			n[i][j] = dato;
		}
	}
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			nueva[i][j] = n[i][j];
		}
	}
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<nueva[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	system("pause");
	return 0;
}
