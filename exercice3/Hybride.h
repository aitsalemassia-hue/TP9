
#ifndef EXERCICE3_HYBRIDE_H_
#define EXERCICE3_HYBRIDE_H_
#include"Thermique.h"
#include"Electrique.h"
class Hybride :public Thermique,public Electrique {
public:
	Hybride(const std::string& marque, const std::string& modele,
            double consommation, int autonomie);

	virtual  void afficherCaracteristiques() const;

	virtual ~Hybride();
};

#endif /* EXERCICE3_HYBRIDE_H_ */
