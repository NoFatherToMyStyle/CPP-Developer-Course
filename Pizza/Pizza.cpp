#include "Pizza.h"

Pizza::Pizza(std::string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
}
void Pizza::addTopping(std::string topping)
{
	toppings.push_back(topping);
}

int Pizza::getCost()
{
	return cost + toppings.size();
}

void Pizza::printToppings()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Cost: " << getCost() << std::endl;
	std::cout << "Diameter: " << diameter << std::endl;
	std::cout << "Toppings: " << std::endl;
	for (std::string i : toppings)
	{
		std::cout << "     " << i << std::endl;
	}
}
