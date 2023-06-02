#include <string>
#include <iostream>

class Roller
{
private:
    double tankgroesse; 
    int kilometerstand;
    double tankinhalt;

public:
    Roller(double tankgroesse, int kilometerstand, double tankinhalt){
        this->tankgroesse = tankgroesse;
        this->kilometerstand = kilometerstand;
        this->tankinhalt = tankinhalt;
    }
    ~Roller(){

    }
    bool tankeDenRoller(double menge)
    {
        if (menge + tankinhalt > tankgroesse) {
            std::cout << "Zu viel Getankt" << std::endl;
            tankinhalt = tankgroesse;
            return false;
        }
        tankinhalt = tankinhalt+menge;
        return true;
    }
    void fahre(int strecke){
        if (tankinhalt > strecke*2){
            tankgroesse = tankgroesse - strecke*2;
            kilometerstand = kilometerstand + strecke;
        }
        else if (tankinhalt < strecke*2){
            kilometerstand = kilometerstand + toInt(tankinhalt*2);
            tankinhalt = 0;
            std::cout << "Dein Tank ist leer" << std::endl;
        }
    }
    bool passtInTank(double menge){
        if (tankgroesse < tankgroesse + menge){
            return false;
        }
        return true;
    }
    double getTankinhalt(){
        return tankinhalt;
    }
    int toInt(double number){
        return (int) number;
    }
    int getKilometerStand(){
        return kilometerstand;
    }
};
