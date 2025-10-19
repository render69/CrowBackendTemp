cmake_minimum_required(VERSION 3.14)
project(CrowBackend LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  crow
  GIT_REPOSITORY https://github.com/CrowCpp/Crow.git
  GIT_TAG master
)
FetchContent_MakeAvailable(crow)

FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.11.3
)
FetchContent_MakeAvailable(nlohmann_json)

include_directories(include)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/routes.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Crow::Crow
    nlohmann_json::nlohmann_json
)
