cmake_minimum_required(VERSION 3.0)
project(Panel)


find_package(wxWidgets 3.2 REQUIRED)
include(${wxWidgets_USE_FILE})

link_libraries(${wxWidgets_LIBRARIES})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(Panel WIN32 MACOSX_BUNDLE Panel.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Containers")
