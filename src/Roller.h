#include <string>
#include <iostream>
#include "Roller.cpp"

class Roller{
    private:
            double tankgroesse, tankinhalt;
            int kilometerstand;
    public: 
        Roller(double,int,double);
        ~Roller();
        bool tankeDenRoller(double menge);
        void fahre(int strecke);
        bool passtInTank(double menge);
        double getTankinhalt();
        int getKilometerStand();
};
