#pragma once
#include "cListaPasajero.h"
#include "pasajeros.h"
class cMedioTransporte
{
protected:
	static int id_cant;
	int id;
	float caja;
	cLista pasajros;
	bool enterminal;
public:
	cMedioTransporte();
	~cMedioTransporte();
	void agregar(pasajeros& passnuevo);
	void eliminar(pasajeros& passviejo);
	void listar()const;
	virtual void cobrar(pasajeros* passcobar)=0;
	virtual int tarifa(pasajeros* passcobar) = 0;
	void recuadar();
	float edades(pasajeros* pass);
};

