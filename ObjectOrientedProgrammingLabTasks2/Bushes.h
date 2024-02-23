#pragma once
#include<iostream>
using namespace std;
#include "Plant.h"
class Bushes : public Plant
{
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
    Bushes(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Bushes height: " << height << " cm" << endl;
    }
    ~Bushes()
    {

    }
};

