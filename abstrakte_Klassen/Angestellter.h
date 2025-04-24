//
// Created by chris on 23.04.2025.
//

#ifndef ABSTRAKTE_KLASSEN_ANGESTELLTER_H
#define ABSTRAKTE_KLASSEN_ANGESTELLTER_H
#include "iostream"

class Angestellter {
protected:
    std::string name;
    float gehalt;

public:
    Angestellter(std::string n, float g) : name(n), gehalt(g) {}
    void arbeitet();
    virtual void auszahlen();
    virtual void berichtet() = 0;       // muss überschrieben werden
    virtual ~Angestellter();           // virtueller Destruktor
};

void ausgabe(Angestellter *A);
#endif //ABSTRAKTE_KLASSEN_ANGESTELLTER_H
