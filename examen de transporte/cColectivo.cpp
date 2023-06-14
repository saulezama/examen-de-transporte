#include "cColectivo.h"

cColectivo::cColectivo(unsigned int linea, string ramal)
{
	this->linea = linea;
	this->ramal=ramal;
}

cColectivo::~cColectivo()
{
}

void cColectivo::cobrar(pasajeros* passcobar)
{
	cPasajeroDis* aux = dynamic_cast<cPasajeroDis*> (passcobar);

	if (aux != nullptr)
	{
		return;
	}
	else
	{
		int rango = edades(passcobar);
		int pago = tarifa(passcobar);
		this->caja = caja + (rango * pago);

	}
}

int cColectivo::tarifa(pasajeros* passcobar)
{
	int tarifa = 0;
	if (passcobar->get_recorrido() < 5)
	{
		tarifa = 5;
	}else if (passcobar->get_recorrido() < 10)
	{
		tarifa = 7;
	}else
	{
		tarifa = 10;
	}

	return tarifa;
}
