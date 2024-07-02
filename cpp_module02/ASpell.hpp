#pragma once

#include<iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell{
	protected:
		std::string Name;
		std::string Effects;
	public:
		ASpell(std::string const& name, std::string const& effects);
		~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void	launch(ATarget const& target);
};