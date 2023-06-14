#pragma once
#include <list>
#include <algorithm>
#include "iostream"
#include "pasajeros.h"

using namespace std;

class cLista: public list<pasajeros> {
public:
	void operator+(pasajeros& element);
	void operator-(pasajeros& element);
	void operator==(pasajeros& element);
	friend ostream& operator<<(ostream& out, const cLista& element);
};

void cLista:: operator+(pasajeros& element) {
	this->push_back(element);
}

void cLista:: operator-(pasajeros& element) {
	this->remove(element);
}

void cLista:: operator==(pasajeros& element) {

}

ostream& operator<<(ostream& out, const cLista& element)
{
	for (pasajeros pass: element)
	{
		out << pass<< endl;
	}
}
