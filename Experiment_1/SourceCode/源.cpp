#include <iostream>
#include <cmath>
#include "score.h"

using namespace std;
int main()
{
	//int N=5;
	SS stu[5];
	readData(stu, 5);

	//readDataFromFile(&N);

	calcuScore(stu, 5);

	sortScore(stu, 5);

	printOut(stu, 5);

	searchInformation(stu, 5);

	//calcuAver(stu, 5);		Ϊ�˱����ظ����ƽ�������ʽ�����ƽ��ֵ�ĺ���ע�͵�

	calcuVar(stu, 5);
	system("pause");
	return 0;
}

