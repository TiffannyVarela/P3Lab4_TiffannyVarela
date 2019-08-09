#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef TEMPLO_CPP
#define TEMPLO_CPP

class Templo : public Edificio{
	protected:
		
	public:
		Templo():Edificio(200, 30){
		}
		
		void Aumento(){
			precio_base= precio_base+100;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
};

#endif
