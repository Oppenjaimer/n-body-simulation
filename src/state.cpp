#include "state.hpp"

void state::reset(State& state) {
    state.mass_vec.resize(state.body_count);
    state.pos_vec.resize(state.body_count);
    state.vel_vec.resize(state.body_count);
    state.acc_vec.resize(state.body_count);

    // Body 0
    state.mass_vec[0] = 1.0f;
    state.pos_vec[0] = {-1.0f, 0.0f};
    state.vel_vec[0] = {0.0f, 0.0f};

    // Body 1
    state.mass_vec[1] = 1.0f;
    state.pos_vec[1] = {1.0f, 0.0f};
    state.vel_vec[1] = {0.0f, 0.0f};
}
