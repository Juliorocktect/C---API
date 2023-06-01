#include <string>
#include "./Roller.h"
using std::string;

class Besitzer
{
private:
    double geld;
    string name;
    Roller roller;
    const double literpreis = 1.5;
public:
    Besitzer(double geld,string name,double tankgroesse,int kilometerstand,double tankinhalt);
    ~Besitzer();
};

Besitzer::Besitzer(double geld,string name,double tankgroesse,int kilometerstand,double tankinhalt)
{
    this->geld = geld;
    this->name = name;
    this->roller = Roller(tankgroesse,kilometerstand,tankinhalt);
}

Besitzer::~Besitzer()
{
}
Besitzer::fahreDeinenRoller(int strecke){
}

