/*	FUNCION REVISAR EL NUMERO MENOR
En este programa se creare un funcion en donde el usuario ingresara por teclado la fila
que desea revisar y deterinar el numero menor de la fila sellecionada
*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void imprimirMatriz(int m[][100],int,int);
int menorValor(int m[][100],int,int);
int m[100][100],nfilas,ncol;

int main(){
	
	pedirDatos();
	imprimirMatriz(m,nfilas,ncol);
	cout<<"El menor valor de la fila seleccionada es: "<<menorValor(m,nfilas,ncol)<<endl;
	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese el numero de filas: "; cin>>nfilas;
	cout<<"Ingrese el numero de columanas: "; cin>>ncol;
	for(int i=0; i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Ingrese los valores de la matriz ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}
void imprimirMatriz(int m[0][100],int nfilas,int ncol){
	cout<<"\n";
	for(int i=0; i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<"  ";
		}
		cout<<"\n";
	}	
}
int menorValor(int m[][100],int nfilas,int ncol){
	int menor = 9999999, fila;
	cout<<"Ingrese la fila que desea revisar: "; cin>>fila;
	for(int i=0; i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if((i+1)==fila){
				if(m[i][j] < menor){
					menor= m[i][j];
				}
			}
		}	
	}
	return menor;	
}
