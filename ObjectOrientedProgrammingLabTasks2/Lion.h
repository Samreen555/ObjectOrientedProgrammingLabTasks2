#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Lion : public Animal
{
	void makeSound() const override {
		cout << "\nRoar!!!!!!!!!!" << endl;
	}
};

