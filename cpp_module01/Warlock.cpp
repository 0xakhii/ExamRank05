#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Warlock.hpp"
#include "ASpell.hpp"

Warlock::Warlock(std::string const& name, std::string const& title){
	Name = name;
	Title = title;
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(){
	std::cout << Name << ": My job here is done!\n";
}

void	Warlock::introduce() const{
	std::cout << Name << ": I am " << Name << ", " << Title << "!\n";
}

std::string const& Warlock::getName() const{
	return Name;
}

std::string const& Warlock::getTitle() const{
	return Title;
}

void	Warlock::setTitle(std::string const& title){
	Title = title;
}

void	Warlock::learnSpell(ASpell* spell){
	Spell.push_back(spell);
}

void	Warlock::forgetSpell(std::string spell){
	for(std::size_t i = 0; i < Spell.size(); i++){
		if (Spell[i]->getName() == spell)
			Spell.erase(Spell.begin() + i);
	}
}

void	Warlock::launchSpell(std::string spell, ATarget const& target){
	for(std::size_t i = 0; i < Spell.size(); i++){
		if (Spell[i]->getName() == spell)
			Spell[i]->launch(target);
	}
}


// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
//   delete fwoosh;
// }
