

#ifndef EXERCICE4_MODERATEUR_H_
#define EXERCICE4_MODERATEUR_H_
#include<iostream>
#include "Utilisateur.h"

class Moderateur : virtual public Utilisateur {
protected:
    int niveauModeration;

public:
    Moderateur(int id, const std::string& login, int niveau);
    virtual ~Moderateur();

    void modererContenu() const;
    void afficher() const override;

    int getNiveauModeration() const;


};

#endif /* EXERCICE4_MODERATEUR_H_ */
