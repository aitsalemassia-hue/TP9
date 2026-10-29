#include"Hybride.h"


int main() {
    Hybride h("Toyota", "Prius", 4.2, 60);
    std::cout << "Caracteristiques "<<std::endl;
    h.afficherCaracteristiques();

    std::cout << "Appel polymorphe "<<std::endl;
    Vehicule* v = &h;
    v->afficherCaracterstiques();

    return 0;
}



