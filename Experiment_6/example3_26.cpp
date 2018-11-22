#include <iostream>
#include "example3_26_student.h"
using namespace std;
const int N = 10;
void menu();
void OutputStu(Student *array);
void InputStu(Student *array);
int SearchStu(Student *array, char *na);
int count = 0;

int main()
{
	Student array[N];
	int choice;					//	读入选项
	do {
		menu();
		cout << "请输入操作序号: ";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "请输入需要查询的姓名：" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].Display();
				break;

			case 3:OutputStu(array); break;
			default:
				break;
			}
	} while (choice);

	
	system("pause");
	return 0;
}
void menu()
{
	cout << "1.录入信息" << endl;
	cout << "2.查询信息" << endl;
	cout << "3.浏览信息" << endl;
	cout << "0.退    出" << endl;
}

void OutputStu(Student *array)
{
	cout << "学生总数=" << ::count << endl;		//如果count前不加::,则这里会显示错误：count不明确，原因是std命名空间里存在std::count，与全局变量count发生冲突。
	for (int i = 0; i < ::count; i++)			//修改方法：在使用全局变量前加上::域解析符。
		array[i].Display();
}
int SearchStu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < ::count; i++)
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	return j;
}

void InputStu(Student *array)
{
	char ch;
	do
	{
		array[::count].Input();
		::count++;
		cout << "继续输入吗？（Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}