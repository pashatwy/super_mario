#pragma once

#include "game_level.hpp"

namespace biv {
	class ThirdLevel : public GameLevel {
		public:
			ThirdLevel(UIFactory* ui_factory);
			
			GameLevel* get_next() override;
			bool is_final() const noexcept override;
			
		private:
			GameLevel* next = nullptr;
			void init_data() override;
	};
}
