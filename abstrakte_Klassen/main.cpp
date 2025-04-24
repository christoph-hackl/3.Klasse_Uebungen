// Abstrakte Klassen und virtuelle Methoden

#include <iostream>


//Beispiel Klasse
/*
class vehicle {
public:
    std::string text;

    virtual void sound() = 0;          // rein virtuelle Methode MUSS überschireben werden
    virtual void move(){                // virtuelle Methode KANN überschrieben werden
        std::cout << "vehicle is moving" << std::endl;
        std::cout << "Diese Methode kann ueberschrieben werden" << std::endl;
    }
    std::string getText(){
        return this->text;
    }
    //Destruktor für jede abgeleitete Klasse
    virtual ~vehicle(){
        std::cout << "Destruktor vehicle" << std::endl;
    }
};

class car: public vehicle {
public:
    void sound(){           // Implementierung der virtuellen Methode
        std::cout << "car sound" << std::endl;
    }
    virtual void move() {   // Überschreiben möglich
        std::cout << "car is moving" << std::endl;
    }
    ~car(){                 // Destruktor
        std::cout << "Destruktor car" << std::endl;
    }
};
 */


#include "Angestellter.h"
#include "Projektleiter.h"
#include "Vorstandsmitglied.h"


//FUNKTIONEN




int main() {
    Vorstandsmitglied Hans("Hans");
    Hans.arbeitet();
    Hans.auszahlen();
    Hans.berichtet();

    Projektleiter Peter("Peter", 5000, "Projekt A");
    Peter.arbeitet();
    Peter.auszahlen();
    Peter.berichtet();
    std::cout << "------------------------" << std::endl;
    ausgabe(&Peter);
    std::cout << "------------------------" << std::endl;
    ausgabe(&Hans);

    return 0;
}


