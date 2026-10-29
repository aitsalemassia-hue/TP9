#include "Personne.h"

Personne::Personne(const std::string& nom, const std::string& prenom)
    : nom(nom), prenom(prenom) {}

Personne::~Personne() = default;

void Personne::afficher() const {
    std::cout << "Nom     : " << nom    << std::endl;
    std::cout << "Prenom  : " << prenom << std::endl;
}
