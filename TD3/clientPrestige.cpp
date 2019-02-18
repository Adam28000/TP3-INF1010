#include "ClientPrestige.h"


using namespace std;

ClientPrestige::ClientPrestige():ClientRegulier(),addresse_(Zone3)
{
}

ClientPrestige::ClientPrestige(string nom, string prenom, int tailleGroupe, int nbPoints, AddressCode addresse):ClientRegulier (nom,prenom,tailleGroupe,nbPoints),addresse_(addresse)
{
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
	case Zone2:
		adresseString = "Zone 2";
	case Zone3:
		adresseString = "Zone 3";
	}
	return adresseString;
}

ostream & operator<<(ostream & os, ClientPrestige client)
{
	os << ClientRegulier(client) << endl;
	os << "	Habite dans la " << client.getAddressCodeString() << endl;
	return os;
}

