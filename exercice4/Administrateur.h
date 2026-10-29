
#ifndef EXERCICE4_ADMINISTRATEUR_H_
#define EXERCICE4_ADMINISTRATEUR_H_
#include<iostream>
#include"Utilisateur.h"

class Administrateur :virtual public Utilisateur {
protected:
	std::string droitsAcces;
public:
	Administrateur(int id, const std::string& login, const std::string& droits);

	void gererSysteme() const;
	void afficher() const override;
	std::string getDroitsAcces() const;
	virtual ~Administrateur();
};

#endif /* EXERCICE4_ADMINISTRATEUR_H_ */
