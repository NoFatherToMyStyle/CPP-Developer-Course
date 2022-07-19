#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <vector>
#include <string>

class Pizza
{
public:
	Pizza(std::string name, int cost, int diameter);
	void addTopping(std::string topping);
	int getCost();
	void printToppings();

private:
	std::string name;
	int cost;
	int diameter;
	std::vector<std::string> toppings;
};


#endif
