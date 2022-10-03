#pragma once
#include<iostream>

class Animals {

public:

	int static id;
	int IdAnimal = 0;
	std::string name;
	Animals();
	Animals(std::string name);

	void DoTheSound() {
		"Animal did the sound";
	}
	void ShowId();
	std::string NameOfId(int id);
};
