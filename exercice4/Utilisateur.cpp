
#include "Utilisateur.h"

Utilisateur::Utilisateur(int id, const std::string& login)
: id(id), login(login) {
}

void Utilisateur::afficher() const {
    std::cout << "  ID    : " << id << std::endl;
    std::cout << "  Login : " << login << std::endl;
}

int Utilisateur::getId() const { return id; }
std::string Utilisateur::getLogin() const { return login; }

Utilisateur::~Utilisateur() {

}

