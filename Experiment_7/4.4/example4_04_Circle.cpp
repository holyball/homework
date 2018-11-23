#include "example4_04_Circle.h"

double Circle::Area()
{
	//Radius *= 2;
	//double a = GetRadius();		//增加此条函数语句，不会报错。非const函数可以调用const成员函数
	return pi*Radius*Radius;
}
double Circle::Circumferefnce()
{
	return 2 * pi*Radius;
}
double Circle::GetRadius()const
{
	//Radius *= 2;					//若增加词条函数语句，则报错。因为常成员函数不可以修改类内数据
	//double a = Area();			//若增加此条函数语句，则报错。因为常成员函数不可以调用非const修饰的变量
	return Radius;					
}