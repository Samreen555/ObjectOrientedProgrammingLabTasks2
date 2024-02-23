#pragma once
#include<iostream>
#include "Animal.h"
using namespace std;
class Monkey :public Animal
{
	void makeSound() const override {
		cout << "\nOoh ooh aaah aah!!!!!!!!!!!!!!" << endl;
	}
};

