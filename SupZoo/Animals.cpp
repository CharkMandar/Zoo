#include"Animals.h"
#include<iostream>


Animals::Animals() {
	id++;
}


Animals::Animals(std::string name) {
	this->id++;
	this->IdAnimal = id;
	this->name = name;

}

void Animals::ShowId() {
	std::cout << IdAnimal << std::endl;
}
