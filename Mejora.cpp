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
		
		int Mejorar(){
			return produccion;
		}
};

#endif
