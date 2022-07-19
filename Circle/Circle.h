#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double radius);
	double getRadius() const;
	void setRadius(double radius);
	double circumference();
	double area();
	void printInfo();
private:
	double radius;
};

#endif
