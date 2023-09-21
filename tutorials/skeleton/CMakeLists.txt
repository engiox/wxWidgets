cmake_minimum_required(VERSION 3.24)

project(SkeletonApp)

set(wxWidgets_ROOT_DIR "D:/Dev/wxWidgets")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

add_executable(skelapp WIN32 ./skel.cpp)

target_link_libraries(skelapp ${wxWidgets_LIBRARIES})
