#include "example4_06_student.h"
int Student::count = 0;						//��̬��Ա�����ĳ�ʼ��
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
	cout << "��  ��: " << name << endl;
	cout << "����֤: " << ID << endl;
	cout << "ѧ  ��: " << number << endl;
	cout << "ר  ҵ: " << speciality << endl;
	cout << "��  ��: " << age << endl;
}
void Student::Input()
{
	char na[10];
	cout << "���������� ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy_s(name, 20, na);
	cout << "��������֤�ţ�";
	cin >> ID;
	cout << "�������䣺 ";
	cin >> age;
	cout << "����רҵ��";
	cin >> speciality;
	cout << "����ѧ�ţ� ";
	cin >> number;
	count++;							//�˾����ӣ�ÿ����һ����ѧ��������һ
}

void Student::Insert()
{
	if (!age)							//�������age��ԱֵΪ0�ǣ��ٴε���Input��������������������ֵ
	{
		Input();
	}
}

void Student::Delete()
{
	age = 0;							//ֻ�򵥵ؽ�age��0�����ƶ�����Ԫ��
	count--;
}

int Student::GetCount()					//������̬��Ա������ר���������ʾ�̬���ݳ�Ա
{
	return count;
}