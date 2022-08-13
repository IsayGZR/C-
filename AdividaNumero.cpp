#include<conio.h>
#include<iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

void menu();
void game1();
void game2();


int main(){

	menu();
	
	getch();
	return 0;
}
//Funcion para mostrar el menu del juego
void menu(){
	int opc;
	do{
		cout<<"\tHOLAAAA!\n\n";
		cout<<"Este juego es llamado adivina el numero tienes dos modos de juegos los cuales son los siguientes: ";
		cout<<"\n1.-Adivida cual es el numero entre el 0-100, tienes solo 8 intentos para adivinarlo\n";
		cout<<"2.-Adivida cual es el numero entre el 0-50, tienes solo 5 intentos para adivinarlo\n";
		cout<<"3.-Salir";
		cout<<"\nOpcion?: ";
		cin>>opc;
		if(opc==1){
			game1();
		}
		else if(opc==2){
			game2();
		}
		system("cls");
	}while(opc != 3);
	cout<<"\nGracias por Jugar\n";
}
//Funcion del modo de juego 1
void game1(){
	//Selecciona un numero aleatorio entre el 1-100
	srand(time(NULL));
	int n = rand() % 100;
	string nombre;
	cout<<"Ingresa tu nombre: ";
	cin>>nombre;
	cout<<"Hola "<<nombre<<" he pensado un numero entre el 1 y el 100\nTienes solo 8 intentos para adivinarlo cual crees que es el numero\n";
	int i=0, numero=0;
	while(i < 8){
		cout<<"Ingresa un numero: "; cin>>numero;
		i++;
		//Comprobamos que se halla ingresado un numero valido
		if(numero < 0 || numero > 100){
			cout<<"No se puede elegir un numero menor al 0 y mayor al 100\n";
		}
		else if(numero < n){
			cout<<"Ha elegido un numero menor al numero secreto\n";
		}
		else if(numero > n){
			cout<<"Ha elegido un numero mayor al numero secreto\n";
		}
		else{
			cout<<"FELICIDADES\nHas acertado al numero secreto y te tomo " <<i<< " intentos\n";
			break;
		}
	}
	if(i==8){
		cout<<"\nLo siento se han agotado los intentos\nEl numero secreo era "<<n<<endl;
	}
	system("pause");
}
//Funcion del modo de juego 2
void game2(){
	//Selecciona un numero aleatorio entre el 1-50
	srand(time(NULL));
	int n = rand() % 50;
	string nombre;
	cout<<"Ingresa tu nombre: ";
	cin>>nombre;
	cout<<"Hola "<<nombre<<" he pensado un numero entre el 1 y el 50\nTienes solo 5 intentos para adivinarlo cual crees que es el numero\n";
	int i=0, numero=0;
	for(i=1; i<6;i++){
		cout<<"Ingresa un numero: "; cin>>numero;
		//Comprobamos que se halla ingresado un numero valido
		if(numero < 0 || numero > 50){
			cout<<"No se puede elegir un numero menor al 0 y mayor al 100\n";
		}
		else if(numero < n){
			cout<<"Ha elegido un numero menor al numero secreto\n";
		}
		else if(numero > n){
			cout<<"Ha elegido un numero mayor al numero secreto\n";
		}
		else{
			cout<<"FELICIDADES\nHas acertado al numero secreto y te tomo " <<i<< " intentos\n";
			break;
		}
	}
	if(i==6){
		cout<<"\nLo siento se han agotado los intentos\nEl numero secreo era "<<n<<endl;
	}
	system("pause");
}
