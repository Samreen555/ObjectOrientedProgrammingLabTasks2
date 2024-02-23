#include<iostream>
using namespace std;
/*
#include "Animal.h"
#include "Lion.h"
#include "Elephant.h"
#include "Monkey.h"
#include "Bird.h"
void hearSound(const Animal& animal)
{
	animal.makeSound();
}
int main()
{
	Lion lion;
	Elephant elephant;
	Monkey monkey;
	Bird bird;
	cout << "Hearing the sound of:Lion ";
	hearSound(lion);
	cout << "\n---------------------------------------------------------------------------------\n";
	cout << "Hearing the sound of:Elephant ";
	hearSound(elephant);
	cout << "\n---------------------------------------------------------------------------------\n";
	cout << "Hearing the sound of:Monkey ";
	hearSound(monkey);
	cout << "\n----------------------------------------------------------------------------------\n";
	cout << "Hearing the sound of:Bird ";
	hearSound(bird);
	cout << "\n----------------------------------------------------------------------------------\n";
	system("pause");
	return 0;
}*/
#include"Plant.h"
#include"Flower.h"
#include"Tree.h"
#include"Bushes.h"
void growth(const Plant& plant)
{
	plant.displayHeight();
}
int main()
{
	Flower flower(10.0);
	Tree tree(20.0);
	Bushes bushes(15.0);
	cout << endl;
	for (int day = 1; day <= 30; ++day) {
		flower.grow();
		tree.grow();
		bushes.grow();
	}
	growth(flower);
	cout << "\n----------------------------------------------------------------------------------\n";
	growth(tree);
	cout << "\n----------------------------------------------------------------------------------\n";
	growth(bushes);
	cout << "\n----------------------------------------------------------------------------------\n";
	system("pause");
	return 0;
}