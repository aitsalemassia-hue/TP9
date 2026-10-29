#include "Moderateur.h"

#include<iostream>


Moderateur::Moderateur(int id, const std::string& login, int niveau)
    : Utilisateur(id, login), niveauModeration(niveau) {
    std::cout << "Moderateur Construction niveau: " << niveau  << std::endl;
}

Moderateur::~Moderateur() {
    std::cout << "Moderateur: Destruction" << std::endl;
}

void Moderateur::modererContenu() const {
    std::cout  << login << " modere le contenu niveau "
         << niveauModeration  << std::endl;
}

void Moderateur::afficher() const {
    Utilisateur::afficher();
    std::cout << "  Niveau moderation: " << niveauModeration << std::endl;
}

int Moderateur::getNiveauModeration() const { return niveauModeration; }
