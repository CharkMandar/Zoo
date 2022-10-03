#pragma once
#include"Mammal.h"

class Dog : public Mammal {
public:

	Dog(std::string name) : Mammal(name) {};
	void sound() {
		std::cout << "Wooof" << std::endl;
	}
};

