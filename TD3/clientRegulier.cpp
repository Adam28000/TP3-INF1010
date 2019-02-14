#include "ClientRegulier.h"

using namespace std;

ClientRegulier::ClientRegulier()
{

}

ClientRegulier::ClientRegulier(string nom, string prenom, int tailleGroupe, int nbPoints):Client(nom,prenom,tailleGroupe),nbPoints_(nbPoints)
{
}

int ClientRegulier::getNbPoints()
{
	return nbPoints_;
}

void ClientRegulier::augmenterNbPoints(int bonus)
{
	nbPoints_ += bonus;
}

ostream & operator<<(ostream & os, const ClientRegulier & client)
{
	os << Client(client) << " Possede "<<client.nbPoints_ << " points" << endl;
	return os;
}
