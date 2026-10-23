#pragma once

namespace config {
    // Application
    constexpr int fps = 60;                             ///< Target frames per second.
    constexpr const char* title = "N-Body Simulation";  ///< Application window title.

    // Screen
    constexpr int screen_width = 1280;                  ///< Initial screen width (px).
    constexpr int screen_height = 720;                  ///< Initial screen height (px).

    // World
    constexpr int world_width = 5000;                   ///< Simulation world width (px).
    constexpr int world_height = 5000;                  ///< Simulation world height (px).

    // Settings panel
    constexpr int settings_collapse = false;            ///< Default state of the settings panel.
    constexpr int settings_pos_x = 10;                  ///< Default X position of the settings panel.
    constexpr int settings_pos_y = 10;                  ///< Default Y position of the settings panel.

    // Camera
    constexpr float pan_sensitivity_mouse = 1.0f;       ///< Drag sensitivity for mouse panning.
    constexpr float pan_sensitivity_keyboard = 600.0f;  ///< Key press sensitivity for keyboard panning.
    constexpr float zoom_sensitivity_mouse = 0.15f;     ///< Wheel sensitivity for mouse zooming.
    constexpr float zoom_sensitivity_keyboard = 4.0f;   ///< Key press sensitivity for keyboard zooming.
    constexpr float zoom_min = 0.1f;                    ///< Minimum camera zoom level.
    constexpr float zoom_max = 10.0f;                   ///< Maximum camera zoom level.

    // Simulation
    constexpr float G = 1.0f;                           ///< Gravitational constant.
    constexpr float dt = 0.01f;                         ///< Physics time step.
    constexpr float soft_len = 0.1f;                    ///< Gravitational force softening length.
    constexpr float px_per_unit = 500.0f;               ///< Screen pixels per physics unit.
    constexpr float radius_factor = 5.0f;               ///< Mass-to-radius factor.
    constexpr float body_count = 2;                     ///< Total number of interacting bodies.
}
