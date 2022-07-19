#include "Circle.h"

int main()
{
	Circle c1;
	Circle c2(5);

	c1.printInfo();
	c2.printInfo();

	c1.setRadius(10);
	c2.setRadius(100);

	c1.printInfo();
	c2.printInfo();
	
	return 0;
}
