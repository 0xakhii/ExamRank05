#include "ASpell.hpp"

ASpell::ASpell(std::string const& name, std::string const& effects){
	Name = name;
	Effects = effects;
}

std::string ASpell::getName() const{
	return Name;
}

std::string ASpell::getEffects() const{
	return Effects;
}

void	ASpell::launch(ATarget const& target){
	target.getHitBySpell(*this);
}

ASpell::~ASpell(){}