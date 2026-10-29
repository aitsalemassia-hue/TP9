

#ifndef EXERCICE3_THERMIQUE_H_
#define EXERCICE3_THERMIQUE_H_
#include"Vehicule.h"
#include<iostream>


class Thermique : virtual public Vehicule {
protected:
	double consommation;
public:
	Thermique(const std::string& marque,const std::string& modele,double consommation);
	virtual ~Thermique();
	double getConsommation() const;
	virtual void afficherCaracteristiques() const  ;

};

#endif /* EXERCICE3_THERMIQUE_H_ */
