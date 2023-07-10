# AboutBox

Shows how to create a AboutBox dialog with wxAboutBox.

## Source

[AboutBox.cpp](AboutBox.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/AboutBox.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` sheAboutBoxll
mkdir build && cd build
cmake .. 
start AboutBox.sln
```

Select AboutBox project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./AboutBox.xcodeproj
```

Select AboutBox project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./AboutBox.cbp > /dev/null 2>&1
```

Select AboutBox project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./AboutBox
```
