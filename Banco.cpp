#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef BANCO_CPP
#define BANCO_CPP

class Banco : public Edificio{
	protected:
		int precio_base, produccion_base;
	public:
		Banco():Edificio(){
			precio_base=100;
			produccion_base=15;
		}
		
		int getPrecio_baseB(){
			return this->precio_base;
		}
		
		int getProduccion_baseB(){
			return this->produccion_base;
		}
		
		void Aumento(){
			precio_base= precio_base+40;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
};

#endif
