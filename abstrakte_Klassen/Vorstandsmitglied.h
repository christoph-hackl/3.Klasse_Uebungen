//
// Created by chris on 23.04.2025.
//

#ifndef ABSTRAKTE_KLASSEN_VORSTANDSMITGLIED_H
#define ABSTRAKTE_KLASSEN_VORSTANDSMITGLIED_H
#include "Angestellter.h"

class Vorstandsmitglied : public Angestellter {
public:
    Vorstandsmitglied(std::string n) : Angestellter(n,10000) {}
    virtual void berichtet();         // Überschreiben der virtuellen Methode
};



#endif //ABSTRAKTE_KLASSEN_VORSTANDSMITGLIED_H
