#include "PlatCustom.h"

PlatCustom::PlatCustom(string nom, double prix, double cout, int nbIngredients):Plat(nom,prix,cout),nbIngredients_(nbIngredients)
{
	supplement_ = calculerSupplement();
	type_ = Custom;
}

int PlatCustom::getNbIngredients() const
{
	return nbIngredients_;
}

double PlatCustom::getSupplement() const
{
	return supplement_;
}

void PlatCustom::setNbIngredients(int nIngredients)
{
	nbIngredients_ = nIngredients;
}

double PlatCustom::calculerSupplement() const
{
	return nbIngredients_*FRAIS_CUSTOMISATION;
}

ostream & operator<<(ostream & os, const PlatCustom & plat)
{
	os<< Plat(plat);
	os << "	contients " << plat.getNbIngredients() << " elements modifies pour un supplment total de : " << plat.getSupplement() << "$" << endl;
	return os;
}
//test//
