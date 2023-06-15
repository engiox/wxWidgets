project(MyApp)

cmake_minimum_required(VERSION 3.24)

set(wxWidgets_ROOT_DIR "D:/dev/wxWidgets")
#set(wxWidgets_LIB_DIR "D:/dev/wxWidgets/lib/gcc_lib")

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
add_executable(myapp hello.cpp)
target_link_libraries(myapp ${wxWidgets_LIBRARIES})

