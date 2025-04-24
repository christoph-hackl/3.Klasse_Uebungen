//
// Created by chris on 23.04.2025.
//

#include "Angestellter.h"
void Angestellter::arbeitet() {
    std::cout << name << " arbeitet." << std::endl;
}
void Angestellter::auszahlen() {
    std::cout << name << " erhält ein Gehalt von: " << gehalt << std::endl;
}
Angestellter::~Angestellter() {           // virtueller Destruktor
    std::cout << "Destruktor Angestellter" << std::endl;
}
void ausgabe(Angestellter *A) {
    A->arbeitet();
    A->auszahlen();
    A->berichtet();
}