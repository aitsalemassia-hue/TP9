

#ifndef EXERCICE1_PERSONNE_H_
#define EXERCICE1_PERSONNE_H_
#include<iostream>
class Personne {
protected:
	std::string nom,prenom;

public:
    Personne(const std::string& nom, const std::string& prenom);
	virtual void afficher() const ;
	virtual ~Personne();
};

#endif /* EXERCICE1_PERSONNE_H_ */
