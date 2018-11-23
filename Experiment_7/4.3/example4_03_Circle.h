#ifndef _Circle
#define _Circle
class Circle
{
private:
	double Radius;
	static const double pi;
public:
	Circle(double r = 0) :pi(3.1415926)
	{
		
		Radius = r;
	}

	double Area();
	double Circumference();
};
#endif#pragma once
