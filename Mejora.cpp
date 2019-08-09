#include <iostream>
#include <string.h>

using namespace std;

#ifndef MEJORA_CPP
#define MEJORA_CPP

class Mejora{
	protected:
		int produccion;
		
	public:
		Mejora(){
		}
		
		Mejora(int produccion){
			this->produccion=produccion;
		}
		
		virtual int Precio()=0;
		virtual int Mejorar()=0;
		virtual void Print()=0;
};

#endif
