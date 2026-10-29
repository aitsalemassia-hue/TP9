#include <iostream>
#include <memory>
#include <limits>
#include "SuperUtilisateur.h"

#include<iostream>

static void afficherMenu() {
    std::cout << " MENU ";
    std::cout << "1. Creer un SuperUtilisateur"<<std::endl;
    std::cout << "2. Afficher les informations"<<std::endl;
    std::cout << "3. Gerer le systeme (Administrateur)"<<std::endl;
    std::cout << "4. Moderer le contenu (Moderateur)"<<std::endl;
    std::cout << "5. Quitter"<<std::endl;
    std::cout << "Votre choix : "<<std::endl;
}

int main() {
    std::unique_ptr<SuperUtilisateur> su;
    int choix = 0;

    while (true) {
        afficherMenu();
        if (!(std::cin >> choix)) {
        	std::cin.clear();
        	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entree invalide.\n";
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choix) {
            case 1: {
                int id, niveau;
                std::string login, droits;

                std::cout << "Identifiant       : ";
                std::cin >> id;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Login             : ";
                getline(std::cin, login);

                std::cout << "Droits d'acces    : ";
                getline(std::cin, droits);

                std::cout << "Niveau moderation : ";
                std::cin >> niveau;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                su = std::make_unique<SuperUtilisateur>(id, login, droits, niveau);
                std::cout << "SuperUtilisateur cree avec succes.\n";
                break;
            }
            case 2:
                if (su) su->afficher();
                else std::cout << "Aucun SuperUtilisateur n'a ete cree.\n";
                break;

            case 3:
                if (su) su->gererSysteme();
                else std::cout << "Aucun SuperUtilisateur n'a ete cree.\n";
                break;

            case 4:
                if (su) su->modererContenu();
                else std::cout << "Aucun SuperUtilisateur n'a ete cree.\n";
                break;

            case 5:
            	std::cout << "Au revoir !\n";
                return 0;

            default:
                std::cout << "Choix invalide.\n";
        }
    }
}



