# DomainSpinCtrl

Shows how to create a DomainSpinCtrl widget with own [wxDomainSpinCtrl](wxDomainSpinCtrl.h) (wxPanel with wxTextCtrl and wxSpinButton).

## Source

[DomainSpinCtrl.cpp](DomainSpinCtrl.cpp)

[wxDomainSpinCtrl.h](wxDomainSpinCtrl.h)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/DomainSpinCtrl.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start DomainSpinCtrl.sln
```

Select DomainSpinCtrl project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./DomainSpinCtrl.xcodeproj
```

Select DomainSpinCtrl project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./DomainSpinCtrl.cbp > /dev/null 2>&1
```

Select DomainSpinCtrl project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./DomainSpinCtrl
```
