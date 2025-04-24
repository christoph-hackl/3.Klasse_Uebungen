//
// Created by chris on 23.04.2025.
//

#include "Projektleiter.h"
void Projektleiter::berichtet() {
    std::cout << name << " berichtet über den Fortschritt des Projekts: " << projektname << std::endl;
}
void Projektleiter::auszahlen() {
    std::cout << name << " erhält ein Gehalt von: " << gehalt << std::endl;
}