#include "Server.h"
#include "./Besitzer.h"
#include "Service.h"
#include "./Roller.h"
#include <string>
#include <iostream>

int main()
{
    //runServer(8080);
    //Roller roller(2.0,2,2.0);
    //std::cout << roller.getTankinhalt() << std::endl;
    Besitzer sui(2.0,"sui",60.0,6,34.0);
    sui.getRoller().fahre(5);
    return 0;
}
