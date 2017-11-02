// CatsAndDogs.cpp : Defines the entry point for the console application.
//
#include<iostream>
#include "stdafx.h"

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "AnimalDetector.h"

//& creert een reference

void SaySomething(Animal& animal) {
	animal.MakeNoise();
}

int main()
{

	Animal animal1 = Animal();
	Dog animal2 = Dog();
	Cat animal3 = Cat();

	//animal1.MakeNoise();
	//animal2.MakeNoise();
	//animal3.MakeNoise();

	SaySomething(animal1);
	SaySomething(animal2);
	SaySomething(animal3);

	AnimalDetector detector = AnimalDetector();
	detector.Detect(animal1);
	detector.Detect(animal2);
	detector.Detect(animal3);




	char c;
	std::cin >> c;


    return 0;
}

