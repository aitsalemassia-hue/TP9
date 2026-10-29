/*
 * Comptable.h
 *
 *  Created on: 28 oct. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_COMPTABLE_H_
#define EXERCICE2_COMPTABLE_H_

class Comptable {
protected:
	float salaireComptable;
public:
	Comptable(float salaire);
	virtual void afficherSalaire() const ;
	virtual ~Comptable();
};

#endif /* EXERCICE2_COMPTABLE_H_ */
