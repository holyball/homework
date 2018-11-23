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
������������=0��ȥ���������н�����䣬��Ϊ��̬����ϵͳ��Ĭ�ϳ�ʼ��Ϊ0��
���ע�͵����������䣬����뱨�����ͣ�https://zhidao.baidu.com/question/454847745407964925
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