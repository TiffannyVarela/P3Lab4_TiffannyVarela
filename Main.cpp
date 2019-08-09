#include <iostream>
#include <typeinfo>
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
void ComprarGranja(int&, vector<Edificio*>&, Granja*);
void ComprarBanco(int&, vector<Edificio*>&, Banco*);
void ComprarTemplo(int&, vector<Edificio*>&, Templo*);
void ComprarOreo(int&, vector<Mejora*>&, Oreo*);
void ComprarMigajas(int&, vector<Mejora*>&, Migajas*);

int main(){
	int opc =0;
	int galletas=0;
	vector <Edificio*> edificios;
	vector <Mejora*> mejoras;
	int contOreo=0, contMigajas=0;
	Granja* g = new Granja();
	Templo* t = new Templo();
	Banco* b = new Banco();
	Oreo* o = new Oreo();
	Migajas* mi = new Migajas();
	int cont=0;
	do{
		
		switch(opc=menu()){
			case 1:
				if(edificios.size()!=0){
					for(int i=0; i<edificios.size(); i++){
						if(typeid(*edificios[i])==typeid(Banco) || typeid(*edificios[i])==typeid(Templo)){
							edificios[i]->Especial();
						}
						if(typeid(*edificios[i])==typeid(Granja)){
							cont++;
						}
						if(cont==10){
							galletas+=20;
							cont=0;
						}
						galletas+=edificios.at(i)->getProduccion_base();
						//edificios.at(i)->setProduccion_base(0);
						galletas++;
					}
					for(int i=0; i<mejoras.size(); i++){
						galletas=galletas*mejoras.at(i)->Mejorar();
					}
				}
				else{
					galletas++;
				}
				cout<<"Galletas Obtenidas: "<<galletas<<endl;
				break;
				
			case 2:
				ComprarGranja(galletas, edificios, g);
				break;
				
			case 3:
				ComprarBanco(galletas, edificios, b);
				break;
				
			case 4:
				ComprarTemplo(galletas, edificios, t);
				break;
				
			case 5:
				if(contOreo==0){
					ComprarOreo(galletas, mejoras, o);
					contOreo++;
				}
				else{
					cout<<"Solo se puede comprar una vez"<<endl;
				}
				break;
				
			case 6:
				if(contMigajas==0){
					ComprarMigajas(galletas, mejoras, mi);
					contMigajas++;
				}
				else{
					cout<<"Solo se puede comprar una vez"<<endl;
				}
				break;
				
			case 7:
				cout<<"Edificios"<<endl;
				for(int i=0; i<edificios.size(); i++){
					cout<<"Edificio #: "<<i+1<<endl;
					edificios[i]->Print();
					cout<<endl;
				}
				
				cout<<"Mejoras"<<endl;
				for(int i=0; i<mejoras.size(); i++){
					cout<<"Mejora #: "<<i+1<<endl;
					mejoras[i]->Print();
					cout<<endl;
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

void ComprarGranja(int& x, vector<Edificio*>& e, Granja* g){
	cout<<g->getPrecio_base()<<endl;
	if(x>=g->getPrecio_base()){
		e.push_back(new Granja());
		x=x-g->getPrecio_base();
		g->Aumento();
		cout<<g->getPrecio_base()<<endl;	
		cout<<x<<endl;		
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarBanco(int& x, vector<Edificio*>& e, Banco* b){
	cout<<b->getPrecio_base()<<endl;
	if(x>=b->getPrecio_base()){
		e.push_back(new Banco());
		x=x-b->getPrecio_base();
		b->Aumento();
		cout<<b->getPrecio_base()<<endl;
		cout<<x<<endl;
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarTemplo(int& x, vector<Edificio*>& e, Templo* t){
	cout<<t->getPrecio_base()<<endl;
	if(x>=t->getPrecio_base()){
		e.push_back(new Templo());
		x=x-t->getPrecio_base();
		t->Aumento();
		cout<<t->getPrecio_base()<<endl;
		cout<<x<<endl;
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarOreo(int& x, vector<Mejora*>& m, Oreo* o){
	cout<<o->Mejorar()<<endl;
	if(x>=o->Precio()){
		m.push_back(new Oreo());
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}

void ComprarMigajas(int& x, vector <Mejora*>& m, Migajas* mi){
	cout<<mi->Mejorar()<<endl;
	if(x>=mi->Precio()){
		m.push_back(new Migajas());
	}
	else{
		cout<<"Cantidad Insuficiente de Galletas"<<endl;
	}
}
