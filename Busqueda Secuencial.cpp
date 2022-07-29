#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[] = {2,4,1,5,3};
	int i, dato;
	char band = 'F';
	
	cout<<"Ingrese un numero: "; cin>>dato;

	i=0;	
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo\n";
	}
	else{
		cout<<"El numero se encontro en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
	
}
