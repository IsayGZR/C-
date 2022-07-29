//Palabra Polindroma

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad[20], cad2[20];
	
	cout<<"Ingrese una palabra: ";
	cin.getline(cad,20,'\n');
	
	strcpy(cad2, cad);
	strrev(cad);
	
	if(strcmp(cad,cad2)==0){
		cout<<"Es una palabra polindroma: "<<cad<<endl;
	}
	else{
		cout<<"NO es una palabra polindroma"<<endl;
	}
	system("pause");
	return 0;
}
