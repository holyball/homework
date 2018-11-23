#include "example4_03_Circle.h"
const double Circle::pi = 3.14;
double Circle::Area()
{
	//pi = 3.14;					报错：左值指定 const 对象	 表达式必须是可修改的左值
	return pi*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * pi*Radius;
}