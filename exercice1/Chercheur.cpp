#include "Chercheur.h"

Chercheur::Chercheur(const std::string& domaineRecherche)
    : domaineRecherche(domaineRecherche) {}

Chercheur::~Chercheur() = default;

void Chercheur::afficher() const {
    std::cout << "Domaine : " << domaineRecherche << std::endl;
}
