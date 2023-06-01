#include "../header/crow_all.h"
#include "./Roller.h"

void StudentControllerFunction(crow::SimpleApp *server){
    crow::SimpleApp &app = *server;
    
    CROW_ROUTE(app, "/add/<int>/<int>")
    ([](int a, int b)
    {
    return std::to_string(a+b);
    });
    
    CROW_ROUTE(app, "/getTankinhalt")
    ([] ()
    {
        Roller roller(3.0,5,7.0);
        return roller.getKilometerStand();
    });
}

void runServer(int port){
    crow::SimpleApp app;
    StudentControllerFunction(&app);
    app.port(port).multithreaded().run();
}
