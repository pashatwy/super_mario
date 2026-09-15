#include "third_level.hpp"

using biv::ThirdLevel;

ThirdLevel::ThirdLevel(UIFactory* ui_factory) : GameLevel(ui_factory) {
	init_data();
}

bool ThirdLevel::is_final() const noexcept {
	return true;
}

biv::GameLevel* ThirdLevel::get_next() {
	return next;
}

// ----------------------------------------------------------------------------
// 									PROTECTED
// ----------------------------------------------------------------------------
void ThirdLevel::init_data() {
	ui_factory->create_mario({39, 10}, 3, 3);

	ui_factory->create_ship({0, 25}, 20, 2);
	ui_factory->create_flyable_enemy({5, 15}, 3, 2);
	ui_factory->create_flyable_enemy({10, 10}, 3, 2);
	ui_factory->create_jumping_enemy({10, 22}, 3, 2);

	ui_factory->create_ship({20, 20}, 5, 7);
	ui_factory->create_moving_platform({25, 18}, 6, 2);
	ui_factory->create_flyable_enemy({28, 10}, 3, 2);
	ui_factory->create_ship({38, 20}, 5, 7);

	ui_factory->create_ship({43, 25}, 25, 2);
	ui_factory->create_full_box({45, 18}, 4, 2);
	ui_factory->create_full_box({52, 18}, 4, 2);
	ui_factory->create_full_box({59, 18}, 4, 2);
	ui_factory->create_jumping_enemy({46, 22}, 3, 2);
	ui_factory->create_jumping_enemy({55, 22}, 3, 2);
	ui_factory->create_flyable_enemy({50, 8}, 3, 2);
	ui_factory->create_flyable_enemy({60, 12}, 3, 2);

	ui_factory->create_ship({68, 20}, 5, 7);
	ui_factory->create_moving_platform({73, 18}, 6, 2);
	ui_factory->create_flyable_enemy({76, 12}, 3, 2);
	ui_factory->create_moving_platform({86, 15}, 6, 2);
	ui_factory->create_flyable_enemy({89, 8}, 3, 2);
	ui_factory->create_ship({99, 20}, 5, 7);

	ui_factory->create_ship({104, 25}, 35, 2);
	ui_factory->create_full_box({106, 18}, 4, 2);
	ui_factory->create_box({112, 18}, 4, 2);
	ui_factory->create_full_box({118, 18}, 4, 2);
	ui_factory->create_box({124, 18}, 4, 2);
	ui_factory->create_enemy({107, 22}, 3, 2);
	ui_factory->create_enemy({115, 22}, 3, 2);
	ui_factory->create_jumping_enemy({122, 22}, 3, 2);
	ui_factory->create_jumping_enemy({130, 22}, 3, 2);
	ui_factory->create_flyable_enemy({108, 8}, 3, 2);
	ui_factory->create_flyable_enemy({118, 12}, 3, 2);
	ui_factory->create_flyable_enemy({128, 8}, 3, 2);

	ui_factory->create_ship({139, 20}, 5, 7);
	ui_factory->create_moving_platform({144, 18}, 6, 2);
	ui_factory->create_flyable_enemy({147, 10}, 3, 2);
	ui_factory->create_moving_platform({157, 15}, 6, 2);
	ui_factory->create_flyable_enemy({160, 8}, 3, 2);
	ui_factory->create_moving_platform({170, 18}, 6, 2);
	ui_factory->create_flyable_enemy({173, 12}, 3, 2);
	ui_factory->create_ship({183, 20}, 5, 7);

	ui_factory->create_ship({188, 20}, 15, 7);
}
