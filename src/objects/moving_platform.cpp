#include "moving_platform.hpp"

#include "map_movable.hpp"

using biv::MovingPlatform;

MovingPlatform::MovingPlatform(const Coord& top_left, const int width, const int height) 
	: RectMapMovableAdapter(top_left, width, height) {
	vspeed = 0;
	hspeed = 0.2;
}

biv::Rect MovingPlatform::get_rect() const noexcept {
	return {top_left, width, height};
}

biv::Speed MovingPlatform::get_speed() const noexcept {
	return {vspeed, hspeed};
}

void MovingPlatform::process_horizontal_static_collision(Rect* obj) noexcept {
	hspeed = -hspeed;
	move_horizontally();
}

void MovingPlatform::process_mario_collision(Collisionable* mario) noexcept {
}

void MovingPlatform::process_vertical_static_collision(Rect* obj) noexcept {
}

void MovingPlatform::move_vertically() noexcept {
}
