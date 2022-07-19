#include "Circle.h"
#include <cmath>
#include <iostream>

double const pi = 3.14159265359;

Circle::Circle()
{
	this->radius = 1;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::circumference()
{
	return 2 * pi * radius;
}

double Circle::area()
{
	return pi * pow(radius, 2);
}

void Circle::printInfo()
{
	std::cout << "This circle has a radius of " << getRadius() << std::endl;
	std::cout << "The circumference is " << circumference() << std::endl;
	std::cout << "The area is " << area() << std::endl;
}
