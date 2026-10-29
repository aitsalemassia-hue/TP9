#ifndef EMPLOYEPOLYVALENT_H_
#define EMPLOYEPOLYVALENT_H_

#include "Technicien.h"
#include "Comptable.h"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(double salaireTechnicien, double salaireComptable);
    void afficherSalaire() const override;
    void afficherTousSalaires() const;
    ~EmployePolyvalent() override;
};
#endif
