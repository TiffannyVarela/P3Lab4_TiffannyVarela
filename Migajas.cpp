#include <iostream>
#include <string.h>
#include "Mejora.cpp"

using namespace std;

#ifndef MIGAJAS_CPP
#define MIGAJAS_CPP

class Migajas : public Mejora{
	protected:
		
	public:
		Migajas(){
		}
		
		int MejorarM(){
			return produccion=3;
		}
};

#endif
