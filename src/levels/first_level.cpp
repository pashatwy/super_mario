#include "first_level.hpp"

#include "second_level.hpp"

using biv::FirstLevel;

FirstLevel::FirstLevel(UIFactory* ui_factory) : GameLevel(ui_factory) {
	init_data();
}

biv::GameLevel* FirstLevel::get_next() {
	if (!next) {
		clear_data();
		next = new biv::SecondLevel(ui_factory);
	}
	return next;
}

// ----------------------------------------------------------------------------
// 									PROTECTED
// ----------------------------------------------------------------------------
void FirstLevel::init_data() {
	ui_factory->create_mario({39, 10}, 3, 3);

	ui_factory->create_ship({0, 25}, 55, 2);

	ui_factory->create_box({10, 18}, 5, 2);
	ui_factory->create_full_box({20, 18}, 5, 2);
	ui_factory->create_box({30, 18}, 5, 2);

	ui_factory->create_enemy({15, 22}, 3, 2);
	ui_factory->create_jumping_enemy({35, 22}, 3, 2);
	ui_factory->create_flyable_enemy({25, 10}, 3, 2);

	ui_factory->create_ship({55, 20}, 10, 7);
	ui_factory->create_moving_platform({65, 18}, 10, 2);
	ui_factory->create_ship({85, 20}, 10, 7);

	ui_factory->create_ship({95, 25}, 60, 2);

	ui_factory->create_full_box({100, 18}, 5, 2);
	ui_factory->create_box({110, 18}, 5, 2);
	ui_factory->create_full_box({120, 18}, 5, 2);

	ui_factory->create_enemy({105, 22}, 3, 2);
	ui_factory->create_enemy({130, 22}, 3, 2);
	ui_factory->create_flyable_enemy({115, 10}, 3, 2);
	ui_factory->create_jumping_enemy({140, 22}, 3, 2);

	ui_factory->create_ship({155, 20}, 15, 7);
}
