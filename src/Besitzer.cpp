#include <string>
#include "Roller.h"
using std::string;

class Besitzer
{
private:
    double geld;
    string name;
    Roller roller;
    const double literpreis = 1.5;
public:
    void fahreDeinenRoller(int strecke){
        roller.fahre(strecke);
    }
    Roller getRoller(){
        return roller;
    }

};

Besitzer::Besitzer(double geld,string name,double tankgroesse,int kilometerstand,double tankinhalt)
{
    this->geld = geld;
    this->name = name;
    roller = Roller(tankgroesse,kilometerstand,tankinhalt);
}

Besitzer::~Besitzer()
{
}

