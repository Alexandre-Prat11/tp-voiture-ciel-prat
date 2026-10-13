#pragma once
#include <string>

class CVoiture {
private:
    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;
public:
    CVoiture(std::string mar, std::string mod, int p, std::string carb);
    void demarrer();
    void arreter();
    void accelerer(int v);
    void ralentir(int v);
    void affiche();
};
