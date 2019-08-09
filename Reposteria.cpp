#include <iostream>
#include <string.h>

using namespace std;

#ifndef REPOSTERIA_CPP
#define REPOSTERIA_CPP

class Reposteria{
	protected:
		string nombre_jugador;
		int num_galletas;
		
	public:
		Reporteria(){
		}
		
		Reporteria(string nombre_jugador, int num_galletas){
			this->nombre_jugador=nombre_jugador;
			this->num_galletas=num_galletas;
		}
		
		string getNombre_jugador(){
			return this->nombre_jugador;
		}
		
		void setNombre_jugador(string nombre_jugador){
			this->nombre_jugador.assign(nombre_jugador);
		}
		
		int getNum_galletas(){
			return this->num_galletas;
		}
		
		void setNum_galletas(int num_galletas){
			this->num_galletas=num_galletas;
		}
		
		~Reposteria(){
		}
};

#endif
