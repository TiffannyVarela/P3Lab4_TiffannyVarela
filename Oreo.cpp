#include <iostream>
#include <string.h>
#include "Mejora.cpp"

using namespace std;

#ifndef OREO_CPP
#define OREO_CPP

class Oreo : public Mejora{
	protected:
		
	public:
		Oreo(){
		}
		
		int MejorarO(){
			return produccion=2;
		}
};

#endif
