# IndieStudio

Epitech project to recreate an indie studio. The project is a bomberman game.

## Team

- [Alwyn Mattapullut](alwyn.mattapullut@epitech.eu) - **Leader**
- [Noa Olivette](noa.olivette@epitech.eu) - **Developer**
- [Nicolas Reboulé](nicolas.reboule@epitech.eu) - **Developer**
- [Hugo Baret](hugo.baret@epitech.eu) - **Developer**
- [Quentin Robert](quentin.robert@epitech.eu) - **Developer**
- [Nicolas Julie](nicolas.julie@epitech.eu) - **Developer**

## Documentation

The documentation is available [here](https://alwyn974.github.io/IndieStudio).

## Requirements

- OpenGL
- CMake 3.17+
- CPack

## Build

If you want to build the game you can run the following command:

```
git clone https://github.com/alwyn974/IndieStudio.git
cd IndieStudio
mkdir build
cmake ..
cmake --build . --config Release
```

The binary will be in the build/ directory. <br>
On Windows `build\Release\bomberman.exe` will build the game. You will need to move the executable to the root <br>
On Linux `build/bomberman` will build the game. No need to move the executable.

## Install

If you want to install the game you can run the following command:

```bash
git clone https://github.com/alwyn974/IndieStudio.git
cd IndieStudio
mkdir build
cmake ..
cpack
```

At the root of the repository a `dist` directory will be created. It contains the game.