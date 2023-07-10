# OpenFileDialogShowWindowModal

Shows how to create a OpenFileDialogShowWindowModal dialog with wxFileDialog using ShowWindowModal method.

## Source

[OpenFileDialogShowWindowModal.cpp](OpenFileDialogShowWindowModal.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![output](../../../docs/Pictures/OpenFileDialogShowWindowModal.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start OpenFileDialogShowWindowModal.sln
```

Select OpenFileDialogShowWindowModal project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./OpenFileDialogShowWindowModal.xcodeproj
```

Select OpenFileDialogShowWindowModal project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./OpenFileDialogShowWindowModal.cbp > /dev/null 2>&1
```

Select OpenFileDialogShowWindowModal project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./Line
```
