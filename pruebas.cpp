#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;



int main(){

	srand(time(NULL));
	string palabras[] = {"hola", "como", "estas"};
	string ind;
	string maquina = palabras[rand() % 3];
	cout<<maquina;
	
	
		
	
	
	getch();
	return 0;
}
