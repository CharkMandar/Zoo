#pragma once
#include"Birds.h"

class Cock : public Birds {
public:

	Cock(std::string name) : Birds(name) {};
	void sound() {
		std::cout << "Cuckoo" << std::endl;
	}
};
