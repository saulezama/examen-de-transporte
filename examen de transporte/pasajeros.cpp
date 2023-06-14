#include "pasajeros.h"

pasajeros::pasajeros(unsigned int edad, unsigned int recorrido)
{
	this->edad = edad;
	this->rerorrido = recorrido;
}

pasajeros::~pasajeros()
{
}

unsigned int pasajeros::get_edad()
{
	return this->edad;
}

unsigned int pasajeros::get_recorrido()
{
	return this->rerorrido;
}
