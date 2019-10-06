<div align="center"><img width="80" src="Resources/icon_128.png" alt="GVNE logo"></div>
<div align="center">
    <b><h1>G V N E</h1></b>
</div>
<p align="center"><b>(*/ω＼*) Gal Visual Novel Engine ヾ(´･ω･｀)ﾉ</b></p>
<div align="center">

  ![forthebadge](https://forthebadge.com/images/badges/built-by-developers.svg)
  ![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)
  
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-electricity.svg)
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-jeffs-keyboard.svg)
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-netflix.svg)
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-oxygen.svg)
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-water.svg)
  ![forthebadge](https://forthebadge.com/images/badges/powered-by-electricity.svg)
  
  ![forthebadge](https://forthebadge.com/images/badges/contains-cat-gifs.svg)
  ![forthebadge](https://forthebadge.com/images/badges/ages-18.svg)
  ![forthebadge](https://forthebadge.com/images/badges/for-you.svg)
  ![forthebadge](https://forthebadge.com/images/badges/makes-people-smile.svg)
  ![forthebadge](https://forthebadge.com/images/badges/uses-git.svg)

  ![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)

  [![Badge](https://img.shields.io/badge/link-996.icu-%23FF4D5B.svg?style=for-the-badge)](https://996.icu/#/en_US)
</div>

## Dependence
- [CMake](https://cmake.org/)
- [Qt5](https://www.qt.io/)
- [QML](https://doc.qt.io/qt-5/location-maps-qml.html)

## Build With CMake
**You Need Install All Depends Before Build**  
Edit `CMakeLists.txt` Into Your Own `PATH/TO/QT/LIBRARY`  
```CMake
set(Qt5_DIR ~/SDK/QT/5.9.7/clang_64/lib/cmake/Qt5/)
```
Code In:  [THERE](https://github.com/GloomyGhost-MosquitoSeal/GVNE/blob/0e12899cab63ad7df8d371ec6e2ce14114ca53aa/CMakeLists.txt#L6)

Run the Shell Script in terminal or open it in VisualStudio:  
```bash
mkdir build
cd build
cmake ..
make
```

