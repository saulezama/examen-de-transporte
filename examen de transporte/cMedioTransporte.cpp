#include "cMedioTransporte.h"

int cMedioTransporte::id_cant = 0;

cMedioTransporte::cMedioTransporte():id(id_cant++)
{
	this->caja = 0;
}

cMedioTransporte::~cMedioTransporte()
{
}

void cMedioTransporte::agregar(pasajeros& passnuevo)
{
	this->pasajros + passnuevo;
}

void cMedioTransporte::eliminar(pasajeros& passviejo)
{
	this->pasajros - passviejo;
}

void cMedioTransporte::listar() const
{
	cout << this->pasajros;
}


void cMedioTransporte::recuadar()
{
}

float cMedioTransporte::edades(pasajeros* pass)
{
	int aux = 0;
	if (pass->get_edad() < 3)
	{
		aux = 0;
	}
	else if (pass->get_edad() < 12)
	{
		aux = 0.2;
	}
	else if (pass->get_edad() < 17)
	{
		aux = 0.5;
	}
	else if (pass->get_edad() >65)
	{
		aux = 0.25;
	}

	return aux;
}
