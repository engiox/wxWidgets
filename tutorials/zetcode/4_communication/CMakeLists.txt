project(myapp)
cmake_minimum_required(VERSION 3.23)

set(wxWidgets_ROOT_DIR "D:/Dev/wxWidgets")
find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})
add_executable(myapp main.cpp Communicate.cpp Panels.cpp)
target_link_libraries(myapp ${wxWidgets_LIBRARIES})
