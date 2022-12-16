cmake_minimum_required(VERSION 3.12)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(mycmake LANGUAGES CXX)
find_package(Eigen3 REQUIRED)

message("PROJECT_NAME: ${PROJECT_NAME}")
add_executable(hellocmake)
target_link_libraries(hellocmake PUBLIC Eigen3::Eigen)
file(GLOB_RECURSE sources CONFIGURE_DEPENDS src/*.cpp include/*.h)
target_include_directories(hellocmake PUBLIC include)
target_sources(hellocmake PUBLIC ${sources})