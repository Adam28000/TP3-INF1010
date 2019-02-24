#include "ClientPrestige.h"


using namespace std;

ClientPrestige::ClientPrestige():ClientRegulier(),addresse_(Zone3)
{
	statut_ = Prestige;
}

ClientPrestige::ClientPrestige(string nom, string prenom, int tailleGroupe, int nbPoints, AddressCode addresse):ClientRegulier (nom,prenom,tailleGroupe,nbPoints),addresse_(addresse)
{
	statut_ = Prestige;
}

AddressCode ClientPrestige::getAddresseCode()
{
	return addresse_;
}

string ClientPrestige::getAddressCodeString()
{
	string adresseString;
	switch (addresse_)
	{
	case Zone1:
		adresseString = "Zone 1";
		break;
	case Zone2:
		adresseString = "Zone 2";
		break;
	case Zone3:
		adresseString = "Zone 3";
		break;
	}
	return adresseString;
}

ostream & operator<<(ostream & os, ClientPrestige client)
{
	string adresse = client.getAddressCodeString();
	os << static_cast<ClientRegulier>(client) ;
	os << "	Habite dans la " << adresse << endl;
	return os;
}

