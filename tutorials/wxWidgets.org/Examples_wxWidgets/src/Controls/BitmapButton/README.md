# BitmapButton

Shows how to create a BitmapButton widget with wxBitmapButton.

## Source

[BitmapButton.cpp](BitmapButton.cpp)

[CMakeLists.txt](CMakeLists.txt)

[gammasoft_16x16.xpm](gammasoft_16x16.xpm)

[gammasoft_64x64.xpm](gammasoft_64x64.xpm)

## Output

![output](../../../docs/Pictures/BitmapButton.png)

## Build and run

To build this project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start BitmapButton.sln
```

Select BitmapButton project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./BitmapButton.xcodeproj
```

Select BitmapButton project and type Cmd+R to build and run it.

### Linux with Code::Blocks :

``` shell
mkdir build && cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./BitmapButton.cbp > /dev/null 2>&1
```

Select BitmapButton project and type F9 to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./BitmapButton
```
