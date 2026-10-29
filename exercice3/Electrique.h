

#ifndef EXERCICE3_ELECTRIQUE_H_
#define EXERCICE3_ELECTRIQUE_H_
#include<iostream>
#include"Vehicule.h"
class Electrique :virtual public Vehicule{
protected:
    int autonomie;
public:
	Electrique(const std::string& marque, const std::string& modele, int autonomie);
	virtual ~Electrique();
	int getAutonomie() const;
	virtual void afficherCaracteristiques() const;

};

#endif /* EXERCICE3_ELECTRIQUE_H_ */
