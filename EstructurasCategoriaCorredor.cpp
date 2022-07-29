/*Categoria de un corredor de acuerdo a su edad.
Juvenil <= 18 años
Señro <= 40 años
Veterano > 40 años
Aplicando estrcuturas*/

#include<iostream>
#include<conio.h>

using namespace std;

struct corredor{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[20];
}corredores[2];

int main(){
	for(int i=0; i<2; i++){
		cout<<"Nombre: ";
		cin.getline(corredores[i].nombre,30,'\n');
		cout<<"Edad: ";
		cin>>corredores[i].edad;
		fflush(stdin); 
		cout<<"Sexo: ";
		cin.getline(corredores[i].sexo,10,'\n');
		cout<<"Club: ";
		cin.getline(corredores[i].club,20,'\n');
		cout<<"\n";
	}
	for(int i=0; i<2; i++){
		if(corredores[i].edad <= 18){
			cout<<"\nCategoria Juvenil\n";
			cout<<"Nombre: "<<corredores[i].nombre<<endl;
			cout<<"Edad: "<<corredores[i].edad<<endl;
			cout<<"Sexo: "<<corredores[i].sexo<<endl;
			cout<<"Club: "<<corredores[i].club<<endl;
		}
		else if((corredores[i].edad > 18) && (corredores[i].edad <= 40)){
			cout<<"\nCategoria Senior\n";
			cout<<"Nombre: "<<corredores[i].nombre<<endl;
			cout<<"Edad: "<<corredores[i].edad<<endl;
			cout<<"Sexo: "<<corredores[i].sexo<<endl;
			cout<<"Club: "<<corredores[i].club<<endl;
		}
		else{
			cout<<"\nCategoria Veterano\n";
			cout<<"Nombre: "<<corredores[i].nombre<<endl;
			cout<<"Edad: "<<corredores[i].edad<<endl;
			cout<<"Sexo: "<<corredores[i].sexo<<endl;
			cout<<"Club: "<<corredores[i].club<<endl;
		}	
	}
	getch();
	return 0;
}
