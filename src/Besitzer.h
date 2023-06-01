#ifndef BESITZER_H
#define BESITZER_H

#include <string>
#include "Roller.h"

class Besitzer{
    private:
        double geld;
        string name;
        Roller roller;
        const double literpreis;
    public:
        Besitzer(double geld,string name,double tankgroesse,int kilometerstand,double tankinhalt);
        ~Besitzer();
    void fahreDeinenRoller(int strecke);   
};
#endif BESITZER_H