#include <crow.h>
#include "routes.hpp"
#include <iostream>

int main() {
    crow::SimpleApp app;
    setupRoutes(app);

    std::cout << "🚀 Crow server started at http://localhost:18080\n";
    app.port(18080).multithreaded().run();
}
