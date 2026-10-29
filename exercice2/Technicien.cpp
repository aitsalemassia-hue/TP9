

#include "Technicien.h"
#include<iostream>
#include<string>
Technicien::Technicien(float salaire):salaireTechnicien(salaire) {


}

void Technicien::afficherSalaire() const {
	std::cout<<" salaire technicien est : " <<salaireTechnicien<<std::endl;
}

Technicien::~Technicien() {
	// TODO Auto-generated destructor stub
}

