cmake_minimum_required(VERSION 3.0)
project(ListCtrl)


find_package(wxWidgets 3.2 REQUIRED)
include(${wxWidgets_USE_FILE})

link_libraries(${wxWidgets_LIBRARIES})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ListCtrl.cpp Ai16.xpm Ai48.xpm Avi16.xpm Avi48.xpm Bmp16.xpm Bmp48.xpm)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Controls")
