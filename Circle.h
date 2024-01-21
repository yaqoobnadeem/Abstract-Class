//Drived Class
#pragma once
#include"Shape.h"
class Circle:public Shape
{
private:
	double radius;
public:
	Circle();
	Circle(double, double);
	void resize(double, double) override;
	double Area() const override;
	void Display() const override;
	~Circle();
};