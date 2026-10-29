

#include "Electrique.h"


Electrique::Electrique(const std::string& marque, const std::string& modele, int autonomie)
: Vehicule(marque, modele), autonomie(autonomie) {
}


int Electrique::getAutonomie() const {
	return autonomie;
}


void Electrique::afficherCaracteristiques() const  {
        Vehicule::afficherCaracterstiques();
        std::cout << "Autonomie : " << autonomie << " km\n";
}

Electrique::~Electrique() {
	// TODO Auto-generated destructor stub
}

