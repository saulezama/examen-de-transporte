#pragma once
#include "cMedioTransporte.h"
#include "cPasajeroComun.h"
#include "cPasajeroDis.h"
class cColectivo : public cMedioTransporte
{
	unsigned int linea;
	string ramal;
public:
	cColectivo(unsigned int linea,string ramal);
	~cColectivo();
	void cobrar(pasajeros* passcobar);
	int tarifa(pasajeros* passcobar);

};

