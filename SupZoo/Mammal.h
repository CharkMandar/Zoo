#pragma once
#include"Animals.h"

class Mammal : public Animals {
public:

	Mammal(std::string name) : Animals(name) {};
	void sound() {
		"Mammal did the sound";
	}
};
