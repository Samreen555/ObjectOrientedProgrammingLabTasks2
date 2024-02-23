#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Elephant : public Animal
{
	void makeSound() const override {
		cout << "\nTrumpet!!!!!!!!!!!!!" << endl;
	}
};

