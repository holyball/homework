#include "example4_06_student.h"
int Student::count = 0;						//静态成员函数的初始化
Student::Student()
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy_s(name, 20, na);
	}
	strcpy_s(ID, 20, id);
	strcpy_s(number, 20, num);
	strcpy_s(speciality, 20, spec);
	age = ag;
	count++;
}

Student::Student(const Student &per)		
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, 20, per.name);
	}
	strcpy_s(ID, 20, per.ID);
	strcpy_s(number, 20, per.number);
	strcpy_s(speciality, 20, per.speciality);
	age = per.age;
	count++;
}

Student::~Student()

{
	if (name)
		delete[]name;
	count--;
}
char* Student::GetName() const
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge() const
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

void Student::Display()const
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
	strcpy_s(name, 20, na);
	cout << "输入身份证号：";
	cin >> ID;
	cout << "输入年龄： ";
	cin >> age;
	cout << "输入专业：";
	cin >> speciality;
	cout << "输入学号： ";
	cin >> number;
	count++;							//此句增加，每输入一个，学生总数加一
}

void Student::Insert()
{
	if (!age)							//当对象的age成员值为0是，再次调用Input（）函数重新输入对象的值
	{
		Input();
	}
}

void Student::Delete()
{
	age = 0;							//只简单地将age置0而不移动数组元素
	count--;
}

int Student::GetCount()					//新增静态成员函数，专门用来访问静态数据成员
{
	return count;
}