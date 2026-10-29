
#include "Vehicule.h"

Vehicule::Vehicule(const std::string& marque,const std::string& modele):marque(marque),modele(modele){}
void Vehicule::afficherCaracterstiques() const{
	std::cout<<"Marque :"<< marque<<std::endl;
	std::cout<<"Modele :"<< modele<<std::endl;
}
Vehicule::~Vehicule() {
	// TODO Auto-generated destructor stub
}

