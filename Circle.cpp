#include "Circle.h"
Circle::Circle() :radius(0.0)
{}

Circle::Circle(double a, double b = 0) : radius(a)
{}

void Circle::resize(double newradius , double a  = 0) 
{
	radius = newradius;

}

double Circle::Area() const
{
	return (radius ) * (radius)  * (22.0 / 7.0);
}

void Circle::Display() const
{
	cout << "Radius: " << radius << "\n";
	cout << "Area: " << Area() << "\n";
}

Circle::~Circle()
{}
