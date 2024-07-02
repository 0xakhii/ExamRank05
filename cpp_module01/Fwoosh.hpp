#pragma once

#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell{
	public:
		Fwoosh();
		virtual ~Fwoosh();
		ASpell* clone() const;
};