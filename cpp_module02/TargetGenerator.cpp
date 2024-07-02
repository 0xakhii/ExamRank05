#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}

void	TargetGenerator::learnTargetType(ATarget* target){
	targetGen.push_back(target);
}

void	TargetGenerator::forgetTargetType(std::string const& type){
	for(std::size_t i = 0; i < targetGen.size(); i++){
		if (targetGen[i]->getType() == type)
			targetGen.erase(targetGen.begin() + i);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& type){
	std::size_t i = 0;
	for(i = 0; i < targetGen.size(); i++){
		if (targetGen[i]->getType() == type)
			return targetGen[i];
	}
	return 0;
}