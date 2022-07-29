/* SOBRECARGA DE CLASES*/

#include<conio.h>
#include<iostream>
using namespace std;

class Tiempo{
	private:
		int horas,minutos,segundos;
	public:
		Tiempo(int, int, int);
		Tiempo(long);
		void mostrarTiempo();		
};

//Constructor 1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

//Constructor 2
Tiempo::Tiempo(long totalSeg){
	horas = int(totalSeg/3600); //Extraer horas
	totalSeg%=3600;
	minutos = int(totalSeg/60); //Extrar minutos
	segundos = int(totalSeg%60); //Extraer segundos
}

void Tiempo::mostrarTiempo(){
	cout<<"La Hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main(){
	Tiempo hora1(16,23,30);
	Tiempo hora2(55410);
	
	hora1.mostrarTiempo();
	hora2.mostrarTiempo();
	
	getch();
	return 0;
}


