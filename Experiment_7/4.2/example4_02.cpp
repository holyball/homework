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
	//p = NULL;						//p=NULL;����������p����ָ��ԭ����ָ��Ķ�̬�ڴ棬��delete����ɾ��pָ��Ķ�̬�ڴ�
	//p->GetName();					//����p��ָ����ڴ�ռ��ѱ��ͷţ��ʸö����Ѳ����ڣ��˺�������޷�ִ��
	//cout << p;
	p->Print();						//p�Ƕ���ָ�룬ֱ���������֮ǰ����������ڣ��ʿ���ͨ�������ʾ�̬������
	//Student::Print();
	Student s[2];
	//s[0].Print();
	Student::Print();
	//s[1].Print();
	Student::Print();
	getchar();
	return 0;
}