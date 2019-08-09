#include <iostream>
#include <string.h>
#include "Mejora.cpp"

using namespace std;

#ifndef OREO_CPP
#define OREO_CPP

class Oreo : public Mejora{
	protected:
		
	public:
		Oreo(){
		}
		
		int Mejorar(){
			return produccion=2;
		}
		
		void Print(){
			cout<<"Oreo"<<endl;
			cout<<"Produccion X: "<<produccion<<endl;
		}
		
		int Precio(){
			return 100;
		}
};

#endif
