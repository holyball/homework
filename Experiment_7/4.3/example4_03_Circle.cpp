#include "example4_03_Circle.h"
const double Circle::pi = 3.14;
double Circle::Area()
{
	//pi = 3.14;					������ֵָ�� const ����	 ���ʽ�����ǿ��޸ĵ���ֵ
	return pi*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * pi*Radius;
}