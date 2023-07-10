# FrameAndThread

Shows how to dialog with a frame widget from a thread.

## Source

[FrameAndThread.cpp](FrameAndThread.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/FrameAndThread.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start FrameAndThread.sln
```

Select FrameAndThread project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./FrameAndThread.xcodeproj
```

Select FrameAndThread project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./FrameAndThread.cbp > /dev/null 2>&1
```

Select FrameAndThread project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./FrameAndThread
```
