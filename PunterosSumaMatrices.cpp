/* PUNTERO SUMA DE DOS MATRICES DINAMICAS*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void sumarMatriz(int **, int **, int, int);
void mostrarResultado(int **, int,int);
int **puntero_matriz1, **puntero_matriz2,nFilas, nCol;



int main(){
	pedirDatos();
	sumarMatriz(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarResultado(puntero_matriz1, nFilas, nCol);
	
	//Liberando la memoria en la matriz 1
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	
	delete[] puntero_matriz1;
	
	//Liberando la memoria en la matriz 2
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	
	delete[] puntero_matriz2;
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese el numero de Filas: ";
	cin>>nFilas;
	cout<<"Ingrese el numero de Columnas: ";
	cin>>nCol;
	
	//Resevando memoria para la matriz dinamica 1
	puntero_matriz1 = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0; i<nFilas; i++){
		puntero_matriz1[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	cout<<"Ingrese los valores de la matriz 1:\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz[i][j]
		}
	}
	
	//Resevando memoria para la matriz dinamica 2
	puntero_matriz2 = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0; i<nFilas; i++){
		puntero_matriz2[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	
	cout<<"Ingrese los valores de la matriz 2:\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz[i][j]
		}
	}
}
void sumarMatriz(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
}
void mostrarResultado(int **puntero_matriz1, int nFilas, int nCol){
	cout<<"\nLa suma de las dos matrices\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"   "<<*(*(puntero_matriz1+i)+j)<<"   "; //puntero_matriz1[i][j]
		}
		cout<<"\n";
	}
}
