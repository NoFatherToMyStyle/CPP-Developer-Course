#include "Pizza.h"

int main()
{
	Pizza p1("Pepporoni Pizza", 7, 8);
	Pizza p2("Meat Lovers", 10, 12);

	p1.printToppings();
	p2.printToppings();

	p1.addTopping("Cheese");
	p1.addTopping("Pepporoni");

	p2.addTopping("Cheese");
	p2.addTopping("Pepporoni");
	p2.addTopping("Sausage");
	p2.addTopping("Chicken");

	p1.printToppings();
	p2.printToppings();


	return 0;
}
