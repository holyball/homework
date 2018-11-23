#include <iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "Wang");
	void GetName();
	int Getnum();
};
int Student::total =0;
/*
如果将这个语句的=0给去掉，则运行结果不变，因为静态变量系统会默认初始化为0；
如果注释掉这个函数语句，则编译报错。解释：https://zhidao.baidu.com/question/454847745407964925
*/
Student::Student(int n, char *p)
{
	num = n;
	strcpy_s(name,20, p);
	total++;

}

void Student::GetName()
{
	cout << name << endl;
}

int Student::Getnum()
{
	return num;
}

int main()
{
	cout << "The number of all students: " << Student::total << endl;

	Student *p = new Student(13);
	cout << "The number of all students: " << Student::total << endl;

	cout << "The number of all students: " << p->total << endl;

	delete p;
	cout << "The number of all students: " << Student::total << endl;

	Student s[2];
	cout << "The number of all student: " << s[0].total << endl;
	cout << "the number of all student: " << s[1].total << endl;
	getchar();
	return 0;
}