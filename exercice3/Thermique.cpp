
#include "Thermique.h"

Thermique::Thermique(const std::string& marque,const std::string& modele,double consommation):
Vehicule(marque, modele), consommation(consommation){}



double Thermique::getConsommation() const { return consommation; }

void Thermique::afficherCaracteristiques() const {
	Vehicule::afficherCaracterstiques();
	std::cout<<"Consommation : " << consommation <<std::endl;
}


Thermique::~Thermique() {
	// TODO Auto-generated destructor stub
}

