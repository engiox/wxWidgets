# NumberEntryDialog

Shows how to create a NumberEntryDialog dialog with wxNumberEntryDialog.

## Source

[NumberEntryDialog.cpp](NumberEntryDialog.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/NumberEntryDialog.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start NumberEntryDialog.sln
```

Select NumberEntryDialog project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./NumberEntryDialog.xcodeproj
```

Select NumberEntryDialog project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./NumberEntryDialog.cbp > /dev/null 2>&1
```

Select NumberEntryDialog project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./NumberEntryDialog
```
