
#ifndef EXERCICE4_UTILISATEUR_H_
#define EXERCICE4_UTILISATEUR_H_
#include<iostream>
class Utilisateur {
protected :
	int id;
	std::string login;
public:
	Utilisateur(int id,const std::string& login);
	int getId() const;
	std::string getLogin()const;
	virtual void afficher() const;

	virtual ~Utilisateur();
};

#endif /* EXERCICE4_UTILISATEUR_H_ */
