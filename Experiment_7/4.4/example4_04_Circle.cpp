#include "example4_04_Circle.h"

double Circle::Area()
{
	//Radius *= 2;
	//double a = GetRadius();		//���Ӵ���������䣬���ᱨ����const�������Ե���const��Ա����
	return pi*Radius*Radius;
}
double Circle::Circumferefnce()
{
	return 2 * pi*Radius;
}
double Circle::GetRadius()const
{
	//Radius *= 2;					//�����Ӵ���������䣬�򱨴���Ϊ����Ա�����������޸���������
	//double a = Area();			//�����Ӵ���������䣬�򱨴���Ϊ����Ա���������Ե��÷�const���εı���
	return Radius;					
}