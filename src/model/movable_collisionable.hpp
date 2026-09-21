#pragma once

#include "movable.hpp"
#include "collisionable.hpp"

namespace biv{
	class MovableCollisionable: public Movable, public Collisionable{
		public:
			MovableCollisionable() = default;
			
			virtual void process_movable_collisionable(Collisionable* platform) noexcept = 0;
	};
}
	