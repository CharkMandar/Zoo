#pragma once
#include"Birds.h"

class Sparrow : public Birds {
public:

	Sparrow(std::string name) : Birds(name) {};
	void sound() {
		std::cout << "Tweet" << std::endl;
	}
};
