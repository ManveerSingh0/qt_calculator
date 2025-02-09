cmake_minimum_required(VERSION 3.31.5)

project(
  qt_project
  LANGUAGES C CXX
)



set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_executable(qt_widgets main.cpp)


target_link_libraries(qt_widgets PRIVATE Qt6::Core Qt6::Widgets)
