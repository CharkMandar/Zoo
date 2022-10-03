#pragma once
#include"Mammal.h"

class Fox : public Mammal {
public:

	Fox(std::string name) : Mammal(name) {};
	void sound() {
		std::cout << "What does the Fox say?" << std::endl;
	}
};

