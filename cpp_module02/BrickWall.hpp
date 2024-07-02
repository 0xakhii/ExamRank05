#pragma once

#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget{
	public:
		BrickWall();
		virtual ~BrickWall();
		ATarget* clone() const;
};