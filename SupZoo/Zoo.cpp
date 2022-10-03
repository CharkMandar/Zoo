#include"Zoo.h"
#include"Animals.h"
#include<iostream>
#include<vector>

Zoo::Zoo() {
	for (int i = 1; i <= AmOfAn; i++) {
		IdOfPopulation[i] = i;
	}
}

void Zoo::GiveAllPop()
{
	std::cout << this->IdAnimal << std::endl;
}

void Zoo::ZooLive(){
	for (int i = 0; i < id; i++) {

	}
}

std::string Zoo::NameOfId(int id) {
	
}
