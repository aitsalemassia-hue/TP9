#include "EnseignantChercheur.h"

EnseignantChercheur::EnseignantChercheur(const std::string& nom,
                                         const std::string& prenom,
                                         const std::string& domaineRecherche)
    : Personne(nom, prenom),
      Chercheur(domaineRecherche) {}

EnseignantChercheur::~EnseignantChercheur() = default;

void EnseignantChercheur::afficher() const {
    std::cout << "Enseignant Chercheur " << std::endl;
    Personne::afficher();
    Chercheur::afficher();
}
