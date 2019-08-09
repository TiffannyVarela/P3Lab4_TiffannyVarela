#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef TEMPLO_CPP
#define TEMPLO_CPP

class Templo : public Edificio{
	protected:
		int precio_base, produccion_base;
	public:
		Templo():Edificio(){
			precio_base=200;
			produccion_base=30;
		}
		
		int getPrecio_baseT(){
			return this->precio_base;
		}
		
		int getProduccion_baseT(){
			return this->produccion_base;
		}
		
		void Aumento(){
			precio_base= precio_base+100;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
};

#endif
