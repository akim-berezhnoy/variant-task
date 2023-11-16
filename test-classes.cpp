#include "test-classes.h"

size_t throwing_move_operator_t::swap_called = 0;

void swap(throwing_move_operator_t&, throwing_move_operator_t&) noexcept {
  throwing_move_operator_t::swap_called += 1;
}

size_t only_movable::move_assignment_called = 0;
