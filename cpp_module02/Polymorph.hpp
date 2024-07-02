#pragma once

#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell{
	public:
		Polymorph();
		virtual ~Polymorph();
		ASpell* clone() const;
};