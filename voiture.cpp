#include "voiture.h"
#include <iostream>

CRoue::CRoue() {
    pression = 2.5;
    diametre = 16.0;
    marque = "Michelin";
}

void CRoue::crevaison() {
    pression = 0.0;
}

double CRoue::getPression() {
    return pression;
}

CVoiture::CVoiture(std::string mar, std::string mod, int p, std::string carb) {
    marque = mar;
    modele = mod;
    puissance = p;
    carburant = carb;
    vitesse = 0;
}

void CVoiture::demarrer() {
    vitesse = 0;
}

void CVoiture::arreter() {
    vitesse = 0;
}

void CVoiture::accelerer(int v) {
    vitesse += v;
}

void CVoiture::ralentir(int v) {
    vitesse -= v;
    if (vitesse < 0) {
        vitesse = 0;
    }
}

void CVoiture::creverRoue() {
    uneRoue.crevaison();
}

void CVoiture::affiche() {
    std::cout << marque << " " << modele << " | Carburant: " << carburant << " | Puissance: " << puissance << "ch | Vitesse: " << vitesse << " km/h" << std::endl;
}
