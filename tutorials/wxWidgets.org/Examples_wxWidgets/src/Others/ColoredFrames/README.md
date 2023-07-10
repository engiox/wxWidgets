# ColoredFrame

shows how to create colored background forms.

## Source

[ColoredFrame.cpp](ColoredFrame.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/ColoredFrames.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start ColoredFrame.sln
```

Select ColoredFrame project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./ColoredFrame.xcodeproj
```

Select ColoredFrame project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ColoredFrame.cbp > /dev/null 2>&1
```

Select ColoredFrame project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./ColoredFrame
```
