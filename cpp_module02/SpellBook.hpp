#pragma once

#include "ASpell.hpp"
#include <vector>

class ASpell;
class SpellBook{
	private:
		std::vector<ASpell*> Spell;
		SpellBook(SpellBook const& copy);
		SpellBook& operator=(SpellBook const& copy);
	public:
		SpellBook(){};
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const& spell);
		ASpell* createSpell(std::string const& spell);
};