#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef GRANJA_CPP
#define GRANJA_CPP

class Granja : public Edificio{
	protected:
		int precio_base, produccion_base;
		int extras;
		
	public:
		Granja():Edificio(){
			precio_base=0;
			produccion_base=5;
		}
		
		int getPrecio_baseG(){
			return this->precio_base;
		}
		
		int getProduccion_baseG(){
			return this->produccion_base;
		}
			
		void Aumento(){
			precio_base= precio_base+15;
		}
		
		void Especial(){
			extras=20;
		}
};

#endif
