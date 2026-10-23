#include "simulation.hpp"
#include "config.hpp"
#include "state.hpp"
#include "theme.hpp"

#include "raymath.h" // Include after raylib.h

#include <cmath>

void simulation::update(State& state) {
    if (state.is_paused) return;

    // Compute accelerations
    for (size_t i = 0; i < state.body_count; i++) {
        Vector2 acc = {0.0f, 0.0f};

        for (size_t j = 0; j < state.body_count; j++) {
            if (i == j) continue;

            Vector2 r = Vector2Subtract(state.pos_vec[j], state.pos_vec[i]);
            float dist_sq = (r.x * r.x) + (r.y * r.y);
            float soft_dist_sq = dist_sq + (config::soft_len * config::soft_len);
            float denominator = soft_dist_sq * std::sqrt(soft_dist_sq);
            float acc_factor = config::G * state.mass_vec[j] / denominator;

            acc = Vector2Add(acc, Vector2Scale(r, acc_factor));
        }

        state.acc_vec[i] = acc;
    }

    // Integrate
    for (size_t i = 0; i < state.body_count; i++) {
        state.vel_vec[i] = Vector2Add(state.vel_vec[i], Vector2Scale(state.acc_vec[i], config::dt));
        state.pos_vec[i] = Vector2Add(state.pos_vec[i], Vector2Scale(state.vel_vec[i], config::dt));
    }
}

void simulation::draw(State& state) {
    // World bounds
    DrawRectangleLines(0, 0, config::world_width, config::world_height, theme::bg4);

    Vector2 screen_center = {config::world_width / 2.0f, config::world_height / 2.0f};

    // Bodies
    for (size_t i = 0; i < state.body_count; i++) {
        Vector2 screen_pos = {
            screen_center.x + (state.pos_vec[i].x * config::px_per_unit),
            screen_center.y + (state.pos_vec[i].y * config::px_per_unit)
        };

        float radius = state.mass_vec[i] * config::radius_factor;

        DrawCircleV(screen_pos, radius, theme::green);
    }
}
