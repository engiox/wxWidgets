# HelloWorldStaticText

The classic first application "Hello World" with wxStaticText.

## Source

[HelloWorldStaticText.cpp](HelloWorldStaticText.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/HelloWorldStaticText.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start HelloWorldStaticText.sln
```

Select HelloWorldStaticText project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./HelloWorldStaticText.xcodeproj
```

Select HelloWorldStaticText project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldStaticText.cbp > /dev/null 2>&1
```

Select HelloWorldStaticText project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldStaticText
```
