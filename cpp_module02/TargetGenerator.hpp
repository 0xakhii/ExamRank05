#pragma once

#include "ATarget.hpp"
#include <vector>

class ATarget;

class TargetGenerator{
	private:
		std::vector<ATarget*> targetGen;
		TargetGenerator(TargetGenerator const& copy);
		TargetGenerator& operator=(TargetGenerator const& copy);
	public:
		TargetGenerator();
		~TargetGenerator();
		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const& type);
		ATarget* createTarget(std::string const& type);
};