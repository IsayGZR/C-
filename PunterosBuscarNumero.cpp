/* PUNTEROS BUSCAR NUMERO
Hacer una función para almacenar N números en un arreglo dinámico,
posteriormente en otra función buscar un número en particular que el usuario desee.
Se utlizara el metodo de busqueda secuencial para encontrar dicho numero.
*/

#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void mostrarArreglo(int *, int);
void busqueda(int *, int);

int nElementos, *elemento;

int main(){
	
	pedirDatos();
	mostrarArreglo(elemento, nElementos);
	busqueda(elemento, nElementos);

	delete[] elemento;
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el numero de elementos del arreglo: "; cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i = 0; i<nElementos; i++){
		cout<<"Ingrese un numero ["<<i+1<<"]: ";
		cin>>*(elemento+i);	
	}
}
void mostrarArreglo(int *elemento, int nElementos){
	cout<<"\nMostrando el arreglo\n";
	
	for(int i=0; i<nElementos;i++){
		cout<<*(elemento+i)<<"  ";
	}
}
void busqueda(int *elemento,int nElementos){
	int dato,i;
	bool band=false;
	
	cout<<"\nIngrese el numero que quiere buscar: ";
	cin>>dato;
	
	//Busqueda Secuencial
	i=0;
	while((band==false)&&(i<nElementos)){
		if(*(elemento+i)==dato){ //Verificar si existe el numero en el arreglo
			band = true; //Si lo encuentra bandera cambia a Verdadero
		}
		i++;
	}
	
	if(band==false){
		cout<<"\nEl numero "<<dato<<" NO ha sido encontrado"<<endl;
	}
	else{
		cout<<"\nEl numero "<<dato<<" ha sido encontrado en la posicion "<<i<<endl;
	}
}
