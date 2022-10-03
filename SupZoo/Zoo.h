#pragma once
#include<vector>
#include <iostream>
#include"Animals.h"


class Zoo : public Animals{
public:

	int AmOfAn = IdAnimal;
	std::vector <int> IdOfPopulation;
	Zoo();

	void GiveAllPop();
	void CountBirds();
	void ZooLive();
	std::string NameOfId(int id);

};

