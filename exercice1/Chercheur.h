

#ifndef EXERCICE1_CHERCHEUR_H_
#define EXERCICE1_CHERCHEUR_H_
#include<iostream>
class Chercheur {
protected:
	std::string domaineRecherche;
public:
	Chercheur(const std::string& domaineRecherche);
	 virtual void afficher() const;
	virtual ~Chercheur();
};

#endif /* EXERCICE1_CHERCHEUR_H_ */
