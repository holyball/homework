#include <iostream>
using namespace std;
float cheekAgeScore(int age, float score)
{
	if (age<16||age>25)
	{
		throw age;
	}
	if (score <0||score>5)
	{
		throw score;
	}
	return score;
}
int main()
{
	char name[5];
	int age;
	float score;
	cin >> name>>age>>score;
	try
	{
		cout << "name: " << name << endl
			<< "age: " << age << endl
			<< "score: " << cheekAgeScore(age,score)*20<<"%" << endl;
	}
	catch (int)
	{
		cout << "���䲻����Ҫ��" << endl;
	}
	catch (float)
	{
		cout << "����������Ҫ��" << endl;
	}
	cout << "dididi" << endl;
	system("pause");
	return 0;
}