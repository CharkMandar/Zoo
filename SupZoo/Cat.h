#pragma once
#include"Mammal.h"

class Cat : public Mammal {
public:

	Cat(std::string name) : Mammal(name) {};
	void sound() {
		std::cout << "Meow" << std::endl;
	}
};
