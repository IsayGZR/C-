/* 	FUNCION DEFINIR SI UN ARREGLO ESTA ORDENADO
rear un funcion en donde solicite un numeo de eleentos deun vector,
ingresar los datos, crear otra funcion que determinara si el vector se encuentra ordenado
de fora decreciente o no, mandar el mensaje por pantalla indicando si se encuetra ordenado o no lo esta
*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void vectorOrdenado(int vec[],int);

int vec[100], tam;
int main(){

	pedirDatos();
	vectorOrdenado(vec,tam);
	
	getch();
	return 0;
}
void pedirDatos(){
		cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Digite un numero: "; cin>>vec[i];
	}
}
void vectorOrdenado(int vec[], int tam){
	char band = 'F';
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl arreglo esta ordenado en forma creciente";
	}
	else{
		cout<<"\nEl arreglo NO esta ordenado";
	}
}

