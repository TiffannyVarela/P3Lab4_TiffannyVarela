#include <iostream>
#include <string.h>
#include "Edificio.cpp"

using namespace std;

#ifndef BANCO_CPP
#define BANCO_CPP

class Banco : public Edificio{
	protected:
	public:
		Banco():Edificio(100,15){
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
			precio_base= precio_base+40;
		}
		
		void Especial(){
			produccion_base=produccion_base+1;
		}
		
		void Print(){
			cout<<"Banco"<<endl;
			cout<<"Precio Base: "<<precio_base<<endl;
			cout<<"Produccion Base: "<<produccion_base<<endl;
		}
};

#endif
