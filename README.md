# Fur Rail Engineers

A game in which you play as an anthropomorphic animal and build a mountainous railroad.

## Setup 

```shell
# Initialize git submodules
git submodule init
git submodule update
git submodule update --init --recursive
```

## Code Formatting

```shell
sudo apt install clang-format
```

```shell
./clang-format-all src
./clang-format-all include
```


## Build

```shell
cmake -S . -B build --fresh
cmake --build ./build
./build/FurRailEngineers
```