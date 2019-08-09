#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef GRANJA_CPP
#define GRANJA_CPP

class Granja : public Edificio{
	protected:
		int extras;
		
	public:
		Granja():Edificio(50, 5){
		}
		
		void Aumento(){
			precio_base= precio_base+15;
		}
		
		void Especial(){
			extras=20;
		}
};

#endif
