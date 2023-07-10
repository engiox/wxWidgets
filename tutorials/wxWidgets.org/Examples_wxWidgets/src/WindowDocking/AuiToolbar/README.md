# AuiToolbar

Shows how to create an AuiToolbar widget with wxAuiToolbar.

## Source

[AuiToolbar.cpp](AuiToolbar.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/AuiToolbar.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start AuiToolbar.sln
```

Select AuiToolbar project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./AuiToolbar.xcodeproj
```

Select AuiToolbar project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./AuiToolbar.cbp > /dev/null 2>&1
```

Select AuiToolbar project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./AuiToolbar
```
