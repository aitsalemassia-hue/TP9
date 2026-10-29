#include "EnseignantChercheur.h"

int main() {
    EnseignantChercheur ec("Ait salem", "Assiya", "Intelligence Artificielle");
    ec.afficher();


    Personne* p = &ec;
    p->afficher();

    return 0;
}
