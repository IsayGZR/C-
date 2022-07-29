/*FUNCION PARA DETERMINAR SI UNA MATRIZ ES SIMETRICA O NO*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100], int, int);
int m[100][100],nfilas,ncol;

int main(){
	
	pedirDatos();
	comprobarSimetria(m,nfilas,ncol);
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese el numero de filas de la matriz: "; cin>>nfilas;
	cout<<"Ingrese el numero de columnas de la matriz: "; cin>>ncol;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Ingrese el numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}
void comprobarSimetria(int m[][100], int nfilas, int ncol){
	int cont = 0;
	if(nfilas == ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == nfilas*ncol){
		cout<<"\nEs una matriz simetrica"<<endl;
	}
	else{
		cout<<"\nLa Matriz NO es simetrica"<<endl;
	}
}
