#include "Rectangle.h"
Rectangle::Rectangle() :length(0.0), width(0.0)
{}

Rectangle::Rectangle(double a, double b) :length(a), width(b)
{}

double Rectangle::Area() const
{
	return length*width;
}

void Rectangle::resize(double newlength, double newwidth) 
{
	length = newlength;
	width = newwidth;
}
void Rectangle::Display() const
{
	cout << "Length: " << length << "\n";
	cout << "Width: " << width<< "\n";
	cout << "Area: " << Area() << "\n";
}
Rectangle::~Rectangle()
{}
