#pragma once

#include<iostream>
#include "ASpell.hpp"
#include <algorithm>
#include <vector>
#include "ATarget.hpp"

class ATarget;
class ASpell;
class Warlock{
	private:
		std::string Name;
		std::string Title;
		std::vector<ASpell*> Spell;
		Warlock();
		Warlock& operator=(const Warlock& copy);
		Warlock(const Warlock& copy);
	public:
		Warlock(std::string const& name, std::string const& title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(std::string const& title);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget const& target);
};