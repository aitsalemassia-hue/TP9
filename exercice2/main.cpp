#include "EmployePolyvalent.h"
#include<iostream>
int main() {

	std::cout<<"l'employe 1"<<std::endl;
    EmployePolyvalent ep(5000.0, 7000.0);
    ep.afficherTousSalaires();
    std::cout << "\n";
    ep.afficherSalaire();

    std::cout<<"l'employe 2"<<std::endl;
    EmployePolyvalent ep2(10000.0, 12000.0);
        ep2.afficherTousSalaires();
        std::cout << "\n";
        ep2.afficherSalaire();

    return 0;
}
