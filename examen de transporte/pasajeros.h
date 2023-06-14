#pragma once
class pasajeros
{
	unsigned int edad, rerorrido;
public:
	pasajeros(unsigned int edad, unsigned int recorrido);
	~pasajeros();
	unsigned int get_edad();

	virtual void hola() = 0;
	unsigned int get_recorrido();

};

