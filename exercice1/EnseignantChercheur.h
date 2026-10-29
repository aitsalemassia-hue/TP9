#ifndef EXERCICE1_ENSEIGNANTCHERCHEUR_H_
#define EXERCICE1_ENSEIGNANTCHERCHEUR_H_

#include "Personne.h"
#include "Chercheur.h"

class EnseignantChercheur : public Personne, public Chercheur {
public:
    EnseignantChercheur(const std::string& nom,
                        const std::string& prenom,
                        const std::string& domaineRecherche);
    void afficher() const override;
    ~EnseignantChercheur() override;
};

#endif /* EXERCICE1_ENSEIGNANTCHERCHEUR_H_ */
