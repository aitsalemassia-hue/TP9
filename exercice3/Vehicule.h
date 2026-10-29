/*
 * Vehicule.h
 *
 *  Created on: 29 oct. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_VEHICULE_H_
#define EXERCICE3_VEHICULE_H_
#include<iostream>

class Vehicule {
protected:
	std::string marque;
	std::string modele;

public:
	Vehicule(const std::string& marque,const std::string& modele);
	virtual void afficherCaracterstiques()const;
	virtual ~Vehicule();
};

#endif /* EXERCICE3_VEHICULE_H_ */
