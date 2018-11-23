#include <iostream>
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];
public:

	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "Wang");
	void GetName();
	int Getnum();
	static void Print();
};
int Student::total = 0;

Student::Student(int n, char *p)
{
	num = n;
	strcpy_s(name, 20, p);
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
void Student::Print()
{
	cout << ":The number of all students: " << total << endl;
}
int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	p->GetName();
	//cout << p;
	//p->Print();
	delete p;
	//p = NULL;						//p=NULL;的作用是令p不再指向原来所指向的动态内存，而delete则是删除p指向的动态内存
	//p->GetName();					//由于p所指向的内存空间已被释放，故该对象已不存在，此函数语句无法执行
	//cout << p;
	p->Print();						//p是对象指针，直到程序结束之前，它都会存在，故可以通过他访问静态类数据
	//Student::Print();
	Student s[2];
	//s[0].Print();
	Student::Print();
	//s[1].Print();
	Student::Print();
	getchar();
	return 0;
}