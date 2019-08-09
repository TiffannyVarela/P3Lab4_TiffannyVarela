#include <iostream>
#include <string.h>

using namespace std;

#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP

class Edificio{
	protected:
		int precio_base, produccion_base;
		
	public:
		Edificio(){
		}
		
		Edificio(int precio_base, int produccion_base){
			this->precio_base=precio_base;
			this->produccion_base=produccion_base;
		}
		
		virtual int getPrecio_base()=0;		
		
		virtual int getProduccion_base()=0;
		
		virtual void setProduccion_base(int produccion_base)=0;
		
			
		virtual void Aumento()=0;
		
		virtual void Especial()=0;
		
		virtual void Print()=0;
};

#endif
