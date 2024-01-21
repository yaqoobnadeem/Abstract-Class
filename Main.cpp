#include "Circle.h"
#include "Rectangle.h"

int main() 
{
	// Create a Rectangle object
	Shape* rect = new Rectangle(5.2, 3.2);
	rect->Display();

	// Demonstrate abstraction by calling the calculateArea function
	cout << "Abstraction - Rectangle Area: " << rect->Area() << "\n\n";

	// Create a Circle object
	Shape* circle = new Circle(5.2,0);
	circle->Display();

	// Demonstrate abstraction by calling the calculateArea function
	cout << "Abstraction - Circle Area: " << circle->Area() << "\n\n";

	// Demonstrate resizing
	cout << "Resizing the Rectangle...\n";
	rect->resize(7.0, 14.0);
	rect->Display();

	cout << "Resizing the Circle...\n";
	circle->resize(6.0, 0.0);
	circle->Display();

	delete rect;
	delete circle;

	return 0;
}