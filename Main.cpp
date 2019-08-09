#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int menu();

int main(){
	int opc =0;
	
	do{
		
		switch(opc=menu()){
			case 1:
				break;
		}
		
	}while(opc!=);
	return 0;
}

int menu(){
	int opc=0;
	while (true){
		cout<<"MENU"<<endl
			<<"1.-Hacer Clic"<<endl
			<<"2.-Comprar Granja"<<endl
			<<"3.-Comprar Banco"<<endl
			<<"4.-Comprar Templo"<<endl
			<<"5.-Comprar Oreo"<<endl
			<<"6.-Comprar Migajas"<<endl
			<<"7.-Mostrar Edificios y Mejoras Compradas"<<endl
			<<"8.-Salir"<<endl;
			
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		if(opc>=1 && opc<=4){
			return opc;
		}
		else{
			cout<<"Opcion elegida no es valida"<<endl;
		}
	}
	return 0;
}
