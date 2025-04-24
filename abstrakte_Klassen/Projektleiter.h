//
// Created by chris on 23.04.2025.
//

#ifndef ABSTRAKTE_KLASSEN_PROJEKTLEITER_H
#define ABSTRAKTE_KLASSEN_PROJEKTLEITER_H
#include "Angestellter.h"


class Projektleiter : public Angestellter {
private:
    std::string projektname;
public:
    Projektleiter(std::string n, float g, std::string p) : Angestellter(n, g), projektname(p) {}

    virtual void berichtet();           // Überschreiben der virtuellen Methode

    virtual void auszahlen();           // Überschreiben der virtuellen Methode
};


#endif //ABSTRAKTE_KLASSEN_PROJEKTLEITER_H
