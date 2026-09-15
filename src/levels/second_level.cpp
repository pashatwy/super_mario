#include "second_level.hpp"

#include "third_level.hpp"

using biv::SecondLevel;

SecondLevel::SecondLevel(UIFactory* ui_factory) : GameLevel(ui_factory) {
	init_data();
}

bool SecondLevel::is_final() const noexcept {
	return false;
}

biv::GameLevel* SecondLevel::get_next() {
	if (!next) {
		clear_data();
		next = new biv::ThirdLevel(ui_factory);
	}
	return next;
}

// ----------------------------------------------------------------------------
// 									PROTECTED
// ----------------------------------------------------------------------------
void SecondLevel::init_data() {
	ui_factory->create_mario({39, 10}, 3, 3);

	ui_factory->create_ship({0, 25}, 40, 2);

	ui_factory->create_full_box({10, 18}, 5, 2);
	ui_factory->create_full_box({25, 18}, 5, 2);

	ui_factory->create_enemy({10, 22}, 3, 2);
	ui_factory->create_jumping_enemy({20, 22}, 3, 2);
	ui_factory->create_jumping_enemy({30, 22}, 3, 2);
	ui_factory->create_flyable_enemy({15, 8}, 3, 2);
	ui_factory->create_flyable_enemy({30, 12}, 3, 2);

	ui_factory->create_ship({40, 20}, 8, 7);
	ui_factory->create_moving_platform({48, 18}, 8, 2);
	ui_factory->create_ship({63, 20}, 8, 7);

	ui_factory->create_ship({71, 25}, 30, 2);

	ui_factory->create_box({75, 15}, 5, 2);
	ui_factory->create_full_box({82, 15}, 5, 2);
	ui_factory->create_box({89, 15}, 5, 2);

	ui_factory->create_enemy({75, 22}, 3, 2);
	ui_factory->create_jumping_enemy({85, 22}, 3, 2);
	ui_factory->create_flyable_enemy({80, 8}, 3, 2);

	ui_factory->create_ship({101, 20}, 8, 7);
	ui_factory->create_moving_platform({109, 18}, 8, 2);
	ui_factory->create_moving_platform({122, 15}, 8, 2);
	ui_factory->create_ship({135, 20}, 8, 7);

	ui_factory->create_ship({143, 25}, 40, 2);

	ui_factory->create_enemy({150, 22}, 3, 2);
	ui_factory->create_enemy({160, 22}, 3, 2);
	ui_factory->create_jumping_enemy({170, 22}, 3, 2);
	ui_factory->create_flyable_enemy({155, 8}, 3, 2);
	ui_factory->create_flyable_enemy({168, 12}, 3, 2);

	ui_factory->create_ship({183, 20}, 15, 7);
}
