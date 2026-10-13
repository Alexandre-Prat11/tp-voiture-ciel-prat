#include "voiture.h"

int main() {
    CVoiture maVoiture("Peugeot", "208", 100, "Essence");[cite: 4]
    
    maVoiture.affiche();[cite: 4]
    maVoiture.demarrer();[cite: 4]
    
    maVoiture.accelerer(50);[cite: 4]
    maVoiture.affiche();[cite: 4]
    
    maVoiture.ralentir(20);[cite: 4]
    maVoiture.affiche();[cite: 4]
    
    maVoiture.arreter();[cite: 4]
    maVoiture.affiche();[cite: 4]

    return 0;
}
