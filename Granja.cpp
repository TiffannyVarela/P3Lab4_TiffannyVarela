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
		Granja():Edificio(50,5){
		}
		
		int getPrecio_base(){
			return this->precio_base;
		}
		
		int getProduccion_base(){
			return this->produccion_base;
		}
		
		void setProduccion_base(int produccion_base)
		{
			produccion_base=0;
		}
			
		void Aumento(){
			precio_base= precio_base+15;
		}
		
		void Especial(){
			extras=20;
		}
		
		void Print(){
			cout<<"Granja"<<endl;
			cout<<"Precio Base: "<<precio_base<<endl;
			cout<<"Produccion Base: "<<produccion_base<<endl;
		}
};

#endif
