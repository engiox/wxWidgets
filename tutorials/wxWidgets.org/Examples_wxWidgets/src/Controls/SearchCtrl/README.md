# SearchCtrl

Shows how to create a SearchCtrl widget with wxSearchCtrl.

## Source

[SearchCtrl.cpp](SearchCtrl.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/SearchCtrl.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start SearchCtrl.sln
```

Select SearchCtrl project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./SearchCtrl.xcodeproj
```

Select SearchCtrl project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ActivityIndicator.cbp > /dev/null 2>&1
```

Select SearchCtrl project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./SearchCtrl
```
