//Drived Class
#pragma once
#include"Shape.h"
class Rectangle:public Shape
{
private:
	double length;
	double width;
public:
	Rectangle();
	Rectangle(double, double);
	void resize(double, double) override;
	double Area() const override;
	void Display() const override;
	~Rectangle();
};

