#pragma once
#include <string>
#include <iostream> 

class Roller{
    private:
            double tankgroesse;
            int kilometerstand;
            double tankinhalt;
    public: 
        Roller(double tankgroesse,int kilometerstand,double tankinhalt);
        ~Roller();
        bool tankeDenRoller(double menge);
        void fahre(int strecke);
        bool passtInTank(double menge);
        double getTankinhalt();
        int getKilometerStand();
};
