

#ifndef EXERCICE2_TECHNICIEN_H_
#define EXERCICE2_TECHNICIEN_H_

class Technicien {
protected:
	float salaireTechnicien;

public:
	Technicien(const float salaire);
	virtual void afficherSalaire() const;
	virtual ~Technicien();
};

#endif /* EXERCICE2_TECHNICIEN_H_ */
