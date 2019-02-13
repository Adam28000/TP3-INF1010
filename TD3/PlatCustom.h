/*
* Titre : PlatCustom.h - Travail Pratique #2
* Date : 11 Février 2019
* Auteur : Fatou S. MOUNZEO
*/

#ifndef PLAT_CUSTOM_H
#define PLAT_CUSTOM_H

#include <string>
#include <iostream>
#include "Plat.h"

using namespace std;

const double FRAIS_CUSTOMISATION = 0.75;

class PlatCustom: public Plat  {
public:
	// constructeur
	PlatCustom(string nom, double prix , double cout,int nbIngredients );

	//getters 
	int getNbIngredients() const;
	double getSupplement()const;

	//setters 
	void setNbIngredients(int nIngredients);




	//methodes en plus 

	friend ostream& operator<<(ostream& os, const PlatCustom& plat); ///
	double calculerSupplement() const;

private:
	double supplement_;
	int nbIngredients_;
	


};

#endif // !PLAT_VERT_H
