#include "EmployePolyvalent.h"

#include<iostream>
EmployePolyvalent::EmployePolyvalent(double st, double sc)
    : Technicien(st), Comptable(sc) {}

EmployePolyvalent::~EmployePolyvalent() = default;

void EmployePolyvalent::afficherSalaire() const {
    afficherTousSalaires();
}

void EmployePolyvalent::afficherTousSalaires() const {

    Technicien::afficherSalaire();
    Comptable::afficherSalaire();
    std::cout << "TOTAL              : "
              << (salaireTechnicien + salaireComptable) << " DH\n";
}
