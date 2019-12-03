#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double r);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif