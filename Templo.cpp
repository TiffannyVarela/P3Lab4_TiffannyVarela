#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef TEMPLO_CPP
#define TEMPLO_CPP

class Templo : public Edificio{
	protected:

	public:
		Templo():Edificio(200,30){

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
			precio_base= precio_base+100;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
		
		void Print(){
			cout<<"Templo"<<endl;
			cout<<"Precio Base: "<<precio_base<<endl;
			cout<<"Produccion Base: "<<produccion_base<<endl;
		}
};

#endif
