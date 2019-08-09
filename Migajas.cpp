#include <iostream>
#include <string.h>
#include "Mejora.cpp"

using namespace std;

#ifndef MIGAJAS_CPP
#define MIGAJAS_CPP

class Migajas : public Mejora{
	protected:
		
	public:
		Migajas(){
		}
		
		int Mejorar(){
			return produccion=3;
		}
		
		void Print(){
			cout<<"Migajas"<<endl;
			cout<<"Produccion X: "<<produccion<<endl;
		}
		
		int Precio(){
			return 1000;
		}
};

#endif
