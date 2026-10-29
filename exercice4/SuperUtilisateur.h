#ifndef SUPERUTILISATEUR_H
#define SUPERUTILISATEUR_H

#include "Administrateur.h"
#include "Moderateur.h"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int id,
                     const std::string& login,
                     const std::string& droits,
                     int niveauModeration);
    virtual ~SuperUtilisateur();

    void afficher() const override;
};

#endif // SUPERUTILISATEUR_H

