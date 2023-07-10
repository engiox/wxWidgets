# BoxedPanel

shows how to create boxed panels with wxPanel and wxBoxSizer.

## Source

[BoxedPanel.cpp](BoxedPanel.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/BoxedPanel.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start BoxedPanel.sln
```

Select BoxedPanel project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./BoxedPanel.xcodeproj
```

Select BoxedPanel project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./BoxedPanel.cbp > /dev/null 2>&1
```

Select BoxedPanel project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./BoxedPanel
```
