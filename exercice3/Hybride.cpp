
#include "Hybride.h"

Hybride::Hybride(const std::string& marque, const std::string& modele,double consommation, int autonomie)
    : Vehicule(marque, modele),
      Thermique(marque, modele, consommation),
      Electrique(marque, modele, autonomie) {

}


void Hybride::afficherCaracteristiques() const  {

        std::cout << "Marque : " << marque << std::endl;
        std::cout << "Modele : " << modele <<std::endl;
        std::cout << "Consommation : " << consommation << " L/100km"<<std::endl;
        std::cout << "Autonomie : " << autonomie << " km\n"<<std::endl;
}


Hybride::~Hybride() {
	// TODO Auto-generated destructor stub
}

