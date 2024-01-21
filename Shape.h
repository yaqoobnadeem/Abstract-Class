//Abstract Class With Pure virtual Function
#pragma once
#include<iostream>
using namespace std;
class Shape {
public:
	virtual ~Shape() {}
	virtual double Area() const = 0;
	virtual void resize(double, double) = 0;
	virtual void Display() const = 0;
};


