#include "../header/crow_all.h"
#include "./Roller.cpp"
#include "./Service.cpp"

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
        return std::to_string(service::devide(10,5));
    });
}

void runServer(int port){
    crow::SimpleApp app;
    StudentControllerFunction(&app);
    app.port(port).multithreaded().run();
    
}
