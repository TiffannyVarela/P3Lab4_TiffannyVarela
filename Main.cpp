#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#include"Granja.cpp"
#include"Banco.cpp"
#include"Templo.cpp"
#include"Edificio.cpp"
#include"Oreo.cpp"
#include"Migajas.cpp"
#include"Reposteria.cpp"
#include"Mejora.cpp"

using namespace std;

int menu();
void ComprarGranja(int, vector<Edificio*>);
void ComprarBanco(int, vector<Edificio*>);
void ComprarTemplo(int, vector<Edificio*>);
void ComprarOreo(int, vector<Mejora*>);
void ComprarMigajas(int, vector<Mejora*>);

int main(){
	int opc =0;
	int galletas=0;
	vector <Edificio*> edificios;
	vector <Mejora*> mejoras;
	int contOreo=0, contMigajas=0;
	Granja* g;
	Templo* t;
	Banco* b;
	do{
		
		switch(opc=menu()){
			case 1:
				if(edificios.empty()){
					for(int i=0; i<edificios.size(); i++){
						//galletas+=edificios[i]
					}
				}
				break;
				
			case 2:
				ComprarGranja(galletas, edificios);
				break;
				
			case 3:
				ComprarBanco(galletas, edificios);
				break;
				
			case 4:
				ComprarTemplo(galletas, edificios);
				break;
				
			case 5:
				if(contOreo==0){
					ComprarOreo(galletas, mejoras);
					contOreo++;
				}
				else{
					cout<<"Solo se puede comprar una vez"<<endl;
				}
				break;
				
			case 6:
				if(contMigajas==0){
					ComprarMigajas(galletas, mejoras);
					contMigajas++;
				}
				else{
					cout<<"Solo se puede comprar una vez"<<endl;
				}
				break;
				
			case 7:
				cout<<"Edificios"<<endl;
				for(int i=0; i<edificios.size(); i++){
					cout<<"Edificio #: "<<i<<endl;
					cout<<edificios[i]<<endl;
				}
				
				cout<<"Mejoras"<<endl;
				for(int i=0; i<mejoras.size(); i++){
					cout<<"Mejora #: "<<i<<endl;
					cout<<mejoras[i]<<endl;
				}
				break;
				
			case 8:
				cout<<"Saliendo"<<endl;
				
				edificios.clear();
				if(edificios.empty()){
					edificios.clear();
				}
				
				mejoras.clear();
				if(mejoras.empty()){
					mejoras.clear();
				}
				break;
		}
		
	}while(opc!=8);
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
		if(opc>=1 && opc<=8){
			return opc;
		}
		else{
			cout<<"Opcion elegida no es valida"<<endl;
		}
	}
	return 0;
}

void ComprarGranja(int x, vector<Edificio*> e){
	Granja g;
	cout<<g.getPrecio_baseG()<<endl;
	if(x>=g.getPrecio_baseG()){
		e.push_back(new Granja());
		g.Aumento();
		cout<<g.getPrecio_baseG()<<endl;		
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarBanco(int x, vector<Edificio*> e){
	Banco b;
	cout<<b.getPrecio_baseB()<<endl;
	if(x>=b.getPrecio_baseB()){
		e.push_back(new Banco());
		b.Aumento();
		cout<<b.getPrecio_baseB()<<endl;
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarTemplo(int x, vector<Edificio*> e){
	Templo t;
	cout<<t.getPrecio_baseT()<<endl;
	if(x>=t.getPrecio_baseT()){
		e.push_back(new Templo());
		cout<<t.getPrecio_baseT()<<endl;
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarOreo(int x, vector<Mejora*> m){
	Oreo o;
	cout<<o.MejorarO()<<endl;
	if(x>=o.MejorarO()){
		m.push_back(new Oreo());
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarMigajas(int x, vector <Mejora*> m){
	Migajas mi;
	cout<<mi.MejorarM()<<endl;
	if(x>=mi.MejorarM()){
		m.push_back(new Migajas());
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}
