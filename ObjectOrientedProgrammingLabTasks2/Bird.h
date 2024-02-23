#pragma once
#include<iostream>
#include "Animal.h"
using namespace std;
class Bird : public Animal
{
	void makeSound() const override
	{
		cout << "\nShrip shrip shrip!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
};

