#include <iostream>

class Pflanze{
public:int pub;
protected:int pro;
private:int pri;

public:
    void get_pflanze(){
        pub=1;
        pro=2;
        pri=3;
    }
};
class Blume: private Pflanze{
public: int farbe;
private: int laenge;
protected: int breite;

    void get_blume(){
        pub=1;
        pro=2;
        pri=3;
    }
};
class Orchidee: public Blume{
public:
    void get_orchidee(){
        pub=1;
        pro=2;
        pri=3;
        farbe=4;
        breite=5;
        laenge=6;
    }
};
int main() {
    Pflanze p;
    Blume b;
    Orchidee o;

    p.pub=1;
    p.pro=2;
    p.pri=3;

    b.pub=1;
    b.pro=2;
    b.pri=3;

    o.pub=1;
    o.pro=2;
    o.pri=3;

    return 0;
}
