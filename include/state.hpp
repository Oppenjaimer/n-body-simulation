#pragma once

#include "raylib.h"

#include "config.hpp"

#include <vector>

struct State {
    bool is_running = true;                             ///< Whether the main loop is active.
    bool is_paused = false;                             ///< Whether the simulation is paused.

    bool settings_collapse = config::settings_collapse; ///< Whether the settings panel is collapsed.
    bool settings_trigger = false;                      ///< Whether a settings panel collapse was triggered.

    size_t body_count = config::body_count;             ///< Total number of interacting bodies.
    std::vector<float> mass_vec;                        ///< Masses of all bodies.
    std::vector<Vector2> pos_vec;                       ///< Positions of all bodies.
    std::vector<Vector2> vel_vec;                       ///< Velocities of all bodies.
    std::vector<Vector2> acc_vec;                       ///< Accelerations of all bodies.
};

namespace state {
    // Reset state to its default configuration
    void reset(State& state);
}
