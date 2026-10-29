#include "SuperUtilisateur.h"
#include<iostream>


SuperUtilisateur::SuperUtilisateur(int id,
                                   const std::string& login,const std::string& droits,int niveauModeration)
    : Utilisateur(id, login),
      Administrateur(id, login, droits),
      Moderateur(id, login, niveauModeration) {
    std::cout << "SuperUtilisateur: Construction terminee" << std::endl;
}

SuperUtilisateur::~SuperUtilisateur() {
    std::cout << "SuperUtilisateur :Destruction" << std::endl;
}

void SuperUtilisateur::afficher() const {

    std::cout << "  ID      : " << id<< std::endl;
    std::cout << "  Login   : " << login << std::endl;
    std::cout << "  Droits  : " << droitsAcces << std::endl;
    std::cout << "  Niveau  : " << niveauModeration << std::endl;
}
