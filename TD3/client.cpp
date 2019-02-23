#include "Client.h"

using namespace std;

Client::Client():nom_("inconnu"),prenom_("inconnu"),statut_(Occasionnel),tailleGroupe_(1)
{
}

Client::Client(string nom, string prenom, int tailleGroupe):nom_(nom),prenom_(prenom),tailleGroupe_(tailleGroupe),statut_(Occasionnel)
{
}

Client::~Client()
{
}

StatutClient Client::getStatut()
{
	return statut_;
}

int Client::getTailleGroupe()
{
	return tailleGroupe_;
}

string Client::getNom()
{
	return nom_;
}

string Client::getPrenom()
{
	return prenom_;
}
string Client::convertirStatutString() const
{
	string statutString;
	switch (statut_)
	{
	case Occasionnel:
		statutString = "Occasionnel";
		break;
	case Fidele:
		statutString = "Fidele";
		break;
	case Prestige:
		statutString = "Prestige";
	}

		return statutString;
	
}

ostream & operator<<(ostream & os, const Client & client)
{
	os << client.prenom_ << "." << client.nom_[0] << " statut:" << client.convertirStatutString();
	return os;
}
