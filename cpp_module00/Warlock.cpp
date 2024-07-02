#include "Warlock.hpp"

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
