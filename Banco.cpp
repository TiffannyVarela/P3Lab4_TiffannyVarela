#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef BANCO_CPP
#define BANCO_CPP

class Banco : public Edificio{
	protected:
		
	public:
		Banco():Edificio(100, 15){
		}
		
		void Aumento(){
			precio_base= precio_base+40;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
};

#endif
