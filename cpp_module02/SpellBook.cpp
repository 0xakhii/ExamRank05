#include "SpellBook.hpp"

void	SpellBook::learnSpell(ASpell* spell){
	if (spell){
		for(std::size_t i = 0; i < Spell.size(); i++){
			if (Spell[i]->getName() == spell->getName())
				return;
		}
		Spell.push_back(spell);
	}
}

void	SpellBook::forgetSpell(std::string const& spell){
	for(std::size_t i = 0; i < Spell.size(); i++){
		if (Spell[i]->getName() == spell)
			Spell.erase(Spell.begin() + i);
	}
}

ASpell* SpellBook::createSpell(std::string const& spell){
	std::size_t i = 0;
	for(i = 0; i < Spell.size(); i++){
		if (Spell[i]->getName() == spell)
			return Spell[i];
	}
	return 0;
}