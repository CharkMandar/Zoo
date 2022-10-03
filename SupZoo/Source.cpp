#include <iostream>
#include"Animals.h"
#include"Birds.h"
#include"Cock.h"
#include"Sparrow.h"
#include"Mammal.h"
#include"Dog.h"
#include"Cat.h"
#include"Fox.h"
#include<typeinfo>

int Animals::id = 0;

int main() {
	Sparrow bird("Petya");
	Sparrow bird2("Vasya");
	Cat kotya("Barsik");

	bird.sound();
	int a;

	bird.ShowId();
	bird2.ShowId();
	kotya.ShowId();
	std::cout << typeid(bird).name() << std::endl;

	return 0;
}