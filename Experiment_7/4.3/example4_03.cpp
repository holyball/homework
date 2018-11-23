#include <iostream>
#include "example4_03_Circle.h"
using namespace std;

int  main()
{
	Circle c1(3.5), c2;
	cout << "area of c1=" << c1.Area() << ", circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c2= " << c2.Area() << ", circumference of c2=" << c2.Circumference() << endl;
	getchar();
	return 0;
}