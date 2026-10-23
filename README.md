# N-Body Simulation

A raylib simulation of the n-body problem in C++. The codebase is written in a minimalist, procedural style, treating C++ as a "better C." It relies on POD structs and namespace-scoped functions rather than heavy object-oriented paradigms.

## Libraries

* [raylib](https://www.raylib.com/): Compiled from source for OpenGL 4.3 support.
* [Dear ImGui](https://github.com/ocornut/imgui): Cloned to `external/imgui`.
* [rlImGui](https://github.com/raylib-extras/rlImGui): Cloned to `external/rlimgui`.

## Usage

Make sure to clone the repository with the `--recursive` option to also clone the submodules inside `external/`. Build the project using `make` and run the executable located in the `bin/` directory.
