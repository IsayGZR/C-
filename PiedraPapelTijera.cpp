#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;


int main()
{
	int opc = 0;
    do{
    	fflush(stdin);
    	char usuario;
    	cout<<"Escoge\n";
		cout<<"'r' - Para roca (piedra)\n";
		cout<<"'p' - Para papel\n";
		cout<<"'t' - Para tijeras\n";
		cin.get(usuario);
    	//Comprobamos que el usario halla ingresado un caracter valido
		if(usuario =='r' || usuario =='p' || usuario =='t'){
			//Seleccionamos un caracter aleatorio entre r-p-t
			srand(time(NULL));
		    std::string alphabet = "rpt";
		    char maquina = alphabet[rand() % alphabet.size()];
			if(usuario == maquina){
				cout<<"\nLa maquina escogio: "<<maquina<<" y usted escogio: "<<usuario<<" por lo tanto es un";
		        cout<<"\nEMPATE\n";
			}
			else if((usuario == 'r' && maquina == 't') || (usuario == 't' && maquina == 'p') || (usuario == 'p' && maquina == 'r')){
				cout<<"\nLa maquina escogio: "<<maquina<<" y usted escogio: "<<usuario<<" por lo tanto usted";
				cout<<"\nGANO\n";
		    }
		    else{
		    	cout<<"\nLa maquina escogio: "<<maquina<<" y usted escogio: "<<usuario<<" por lo tanto usted";
		    	cout<<"\nPERDIO\n";
			}
		}
		else{
			cout<<"\nNO es valida su entrada. Escoja una opcion valida\n";
		}	
		
		cout<<"\nQuiere volver a jugar? 1.-SI 2.-N0:   ";
		cin>>opc;
		system("cls");
	}while(opc == 1);
	cout<<"\nGracias por Jugar\n";
	
 	getch();
    return 0;
}




