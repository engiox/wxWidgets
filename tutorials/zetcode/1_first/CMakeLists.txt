cmake_minimum_required(VERSION 3.24)

project(MyApp)

set(wxWidgets_ROOT_DIR "D:/dev/wxWidgets")

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})
add_executable(myapp main.cpp myFrame.cpp init.cpp)
target_link_libraries(myapp ${wxWidgets_LIBRARIES})

