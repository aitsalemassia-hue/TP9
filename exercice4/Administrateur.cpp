
#include "Administrateur.h"

Administrateur::Administrateur(int id, const std::string& login, const std::string& droits):
Utilisateur(id, login), droitsAcces(droits){}

void Administrateur::gererSysteme() const {
    std::cout << ">> " << login << " gere le systeme -> droits: "
         << droitsAcces << std::endl;
}

void Administrateur::afficher() const {
    Utilisateur::afficher();
    std::cout << "  Droits: " << droitsAcces << std::endl;
}

std::string Administrateur::getDroitsAcces() const { return droitsAcces; }

Administrateur::~Administrateur() {

}


