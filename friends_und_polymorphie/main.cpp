#include <iostream>
using namespace std;
class person{
public:
    int wert;
    string name;
    friend void fremd (person *,int);

    virtual void nummer(){}

    void ausgabe(){
        std::cout << "Name: " << name << std::endl;
        nummer();
        std::cout << "Wert: " << wert << std::endl;
    }

};

class schuler : public person {
public:
    int katalognummer;

    void nummer(){
        std::cout << "Katalognummer: " << katalognummer << std::endl;
    }


};

class lehrer : public person {
public:
    int lehrernummer;

    void nummer(){
        std::cout << "Lehrernummer: " << lehrernummer << std::endl;
    }
};


void fremd(person *s, int w){
    s->wert = w;
}


int main() {
    person Herbert;
    schuler Max;
    lehrer Peter;

    Max.katalognummer = 123;
    Peter.lehrernummer = 456;
    Max.name = "Max";
    Peter.name = "Peter";
    Max.wert = 1;
    Peter.wert = 2;
    Herbert.wert = 3;
    Herbert.name = "Herbert";
    fremd(&Herbert, 4);


    Max.ausgabe();
    Peter.ausgabe();
    Herbert.ausgabe();

    fremd(&Herbert, 5);

    return 0;
}
