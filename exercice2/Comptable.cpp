

#include "Comptable.h"
#include<iostream>
Comptable::Comptable(float salaire):salaireComptable(salaire) {
	// TODO Auto-generated constructor stub

}
void Comptable::afficherSalaire() const {
	std::cout<<" salaire Comptable est : " <<salaireComptable<<std::endl;
}

Comptable::~Comptable() {
	// TODO Auto-generated destructor stub
}

