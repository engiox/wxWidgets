cmake_minimum_required(VERSION 3.24)

project(MyApp)

set(wxWidgets_ROOT_DIR "D:/Dev/wxWidgets")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
#target_link_libraries(myapp ${wxWidgets_LIBRARIES})

add_executable(myapp hello.cpp)

target_link_libraries(myapp ${wxWidgets_LIBRARIES})
