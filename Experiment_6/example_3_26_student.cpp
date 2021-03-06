#include "example3_26_student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy_s(name, 20,na);
	}
	strcpy_s(ID, 20,id);
	strcpy_s(number, 20,num);
	strcpy_s(speciality,20, spec);
	age = ag;
}

Student::Student(const Student &per)		//拷贝构造函数
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, 20,per.name);
	}
	strcpy_s(ID,20, per.ID);
	strcpy_s(number,20, per.number);
	strcpy_s(speciality, 20,per.speciality);
	age = per.age;
}

Student::~Student()

{
	if (name)
		delete[]name;
}
char* Student::GetName()
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge()
{
	return age;
}

char* Student::GetSpec()
{
	return speciality;
}

char* Student::GetNumber()
{
	return number;
}

void Student::Display()
{
	cout << "姓  名: " << name << endl;
	cout << "身份证: " << ID << endl;
	cout << "学  号: " << number << endl;
	cout << "专  业: " << speciality << endl;
	cout << "年  龄: " << age << endl;
}
void Student::Input()
{
	char na[10];
	cout << "输入姓名： ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy_s(name,20, na);
	cout << "输入身份证号：";
	cin >> ID;
	cout << "输入年龄： ";
	cin >> age;
	cout << "输入专业：";
	cin >> speciality;
	cout << "输入学号： ";
	cin >> number;
}

