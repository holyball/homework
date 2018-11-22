#ifndef _STUDENT
#define _STUDENT
#include <iostream>
#include <string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	Student(char * na, char * id, char * num, char * spec, int ag);
	Student(const Student &per);				//拷贝构造函数
	~Student();									//析构函数
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* GetSpec();							//提取专业
	int GetAge();
	void Display();
	void Input();								//输入学生信息
};
#endif#pragma once
