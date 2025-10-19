#include "routes.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

void setupRoutes(crow::SimpleApp& app) {
    CROW_ROUTE(app, "/")([] {
        return "Hello from Backend!";
    });

    CROW_ROUTE(app, "/api/ping").methods(crow::HTTPMethod::GET)([] {
        json data = {{"status", "ok"}, {"message", "pong"}};
        crow::response res(data.dump());
        res.add_header("Content-Type", "application/json");
        return res;
    });

    CROW_ROUTE(app, "/api/users").methods(crow::HTTPMethod::GET)([] {
        json users = {
            {{"id", 1}, {"name", "Render"}},
            {{"id", 2}, {"name", "Template"}},
        };
        crow::response res(users.dump());
        res.add_header("Content-Type", "application/json");
        return res;
    });
}
