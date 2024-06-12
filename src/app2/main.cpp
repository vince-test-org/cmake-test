#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    std::cout << "app2" << std::endl;
    json ex1 = json::parse(R"(
      {
        "pi": 3.141,
        "happy": true
      }
    )");
    std::cout << ex1.dump(2) << std::endl;

    return 0;
}
