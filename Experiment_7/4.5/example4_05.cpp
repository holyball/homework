#include <iostream>
#include<string>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1, char *na= "Zhuli");
	~Person();
	void Print();
	void Print() const;
	void ModifyAge();
};

Person::Person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy_s(name,strlen(name)+1,na);
}

Person::~Person()
{
	delete []name;
}
void Person::Print()									//如果注释掉这个函数的定义及声明，则无错误。普通对象即可以调用普通函数也可以调用常成员函数
{
	cout << "age:" << age << "name: " << name << endl;
	cout << "This is general Print()." << endl;
}

void Person::Print() const								//如果注释掉这个函数的定义及声明，则p1调用的是普通成员函数，会报错。
														//常对象只能调用常成员函数
{
	cout << "age:" << age << " name: " <<name<< endl;
	cout << "This is const Print()." << endl;
}

void Person::ModifyAge()
{
	age++;
}
int main()
{
	const Person p1(17, "wu");
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, "zhang");
	cout << "output general object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	getchar();
	return 0;
}


