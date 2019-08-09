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
		
		int getPrecio_base(){
			return this->precio_base;
		}
		
		void setPrecio_base (int precio_base){
			this->precio_base=precio_base;
		}
		
		int getProduccion_base(){
			return this->produccion_base;
		}
		
		void setProduccion_base (int produccion_base){
			this->produccion_base=produccion_base;
		}
			
			
		virtual void Aumento()=0;
		
		virtual void Especial()=0;
};

#endif
