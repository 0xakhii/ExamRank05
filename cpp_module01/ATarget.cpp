#include "ATarget.hpp"

ATarget::ATarget(std::string const& type){
	Type = type;
}

std::string const& ATarget::getType() const{
	return Type;
}

void ATarget::getHitBySpell(ASpell const& spell) const{
	std::cout << Type << " has been " << spell.getEffects() << "!\n";
}

ATarget::~ATarget(){}