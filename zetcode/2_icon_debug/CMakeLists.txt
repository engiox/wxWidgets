project(MyApp)

cmake_minimum_required(VERSION 3.0)

set(wxWidgets_ROOT_DIR "D:/Dev/wxWidgets")
find_package(wxWidgets REQUIRED COMPONENTS base core)

include(${wxWidgets_USE_FILE})

add_executable(myapp ./main.cpp ./MyApp.cpp ./MyFrame.cpp)

target_link_libraries(myapp ${wxWidget_LIBRARIES})
