# HyperlinkCtrl

Shows how to create a HyperlinkCtrl widget with wxHyperlinkCtrl.

## Source

[HyperlinkCtrl.cpp](HyperlinkCtrl.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/HyperlinkCtrl.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start HyperlinkCtrl.sln
```

Select HyperlinkCtrl project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./HyperlinkCtrl.xcodeproj
```

Select HyperlinkCtrl project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HyperlinkCtrl.cbp > /dev/null 2>&1
```

Select HyperlinkCtrl project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./HyperlinkCtrl
```
