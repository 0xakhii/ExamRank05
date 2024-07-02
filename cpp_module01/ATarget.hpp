#pragma once

#include "ASpell.hpp"
#include "Warlock.hpp"

class ASpell;
class ATarget{
	protected:
		std::string Type;
	public:
		ATarget(std::string const& type);
		~ATarget();
		std::string const& getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(ASpell const& spell) const;
};