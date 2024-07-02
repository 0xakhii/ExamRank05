#pragma once

#include<iostream>

class Warlock{
	private:
		std::string Name;
		std::string Title;
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
};