		/*ARREGLO DE ESTRUCTURAS
1.-Solicitar al usuario el numero de empleados.
2.-Pedir su nombre y salario.
3.-Calcular al empleado con el mayor salario.
5.-Calcular al empleado con el menor salario.
6.-Mostrar por pantalla los datos de dichos empleados.*/


#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	int numempleados, posM = 0, posm = 0;
	float salario, mayor = 0, menor = 999999;
	cout<<"Digite el numero de empleados: ";
	cin>>numempleados;
	
	for(int i=0; i<numempleados; i++){
		fflush(stdin);
		cout<<i+1<<".-Nombre: ";
		cin.getline(emp[i].nombre, 20, '\n');
		cout<<i+1<<".-Salario: ";
		cin>>emp[i].salario;
	
	if(emp[i].salario > mayor){
		mayor = emp[i].salario;
		posM = i;
	}
	if(emp[i].salario < menor){
		menor = emp[i].salario;
		posm = i;
	}
	
	cout<<"\n";
			
	}
	
	cout<<"\nDatos del empleado con el mayor salario.\n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"\nDatos del empleado con el menor salario.\n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;	
	
	getch();
	return 0;
}

