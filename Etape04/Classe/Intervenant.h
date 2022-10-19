#ifndef INTERVENANT_H
#define INTERVENANT_H
#include <string>
#include "Personne.h"

using namespace std; 

class Intervenant : public Personne
{
protected:
	int numero;

public:
	Intervenant();
	Intervenant(string,string,int);
	Intervenant(const Intervenant&);
	~Intervenant();

	Intervenant& operator=(const Intervenant&);

	virtual string ToString()const;
	virtual string Tuple()const;

	void setNumero(int);
	int getNumero()const;
};
#endif