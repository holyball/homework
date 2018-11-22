#include "score.h"
#include <iostream>
using namespace std;

void readData(SS stu[], int N)
{
	cout << "������ѧ�ţ�������ƽʱ�ɼ���ʵ��ɼ�����ĩ�ɼ�" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyScore >> stu[i].experScore >> stu[i].finalScore;
	}
}

/*SS* readDataFromFile(int *N) //���ļ����ȡѧ����Ϣ
{

	printf("\n\n------��һ��: ���ļ���ȡѧ���ĳɼ���Ϣ--------\n\n");

	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("E:\\codefile\\���������ҵ\\Homework_Turing\\����\\Experiment_1\\SourceCode", "r");

	//1.��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("ѧ����ĿΪ:%d\n", count);
	getchar();

	//2.������ѧ������洢�ռ�
	stu = (SS*)malloc(count * sizeof(SS));


	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (index < count))
	{

		//�����ļ����ݵ��ڴ�
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//���ԭʼѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;


	}

	fclose(fp);

	return stu;
}*/

void calcuScore(SS stu[], int N)
{
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experScore + 0.6*stu[i].finalScore;
	}
}

void sortScore(SS stu[], int N)		//���ݳɼ��ɸ���������
{
	for (int i = 0; i < N; i++)
	{
		stu[i].rank = 1;			//������ǣ���ʼֵΪ1
		for (int j = 0; j < N; j++)
		{
			if (j != i)				//�����Լ����Լ��Ƚ�
			{
				if (stu[i].generalScore < stu[j].generalScore)		//�����Ϊi��ͬѧ�ɼ���j��ͬѧ�ɼ��ͣ������Ϊi��ͬѧ��������1λ�����½�1λ��
				{
					stu[i].rank += 1;
				}
			}
		}
	}
}

void printOut(SS stu[], int N)
{
	cout << "����  ѧ��  ����  ƽʱ�ɼ�  ��ĩ�ɼ�  ʵ��ɼ�  �����ɼ�" << endl;
	for (int i = 1; i <= N; i++)	//i��ʾ��������
	{
		for (int j = 0; j < N; j++)	//
		{
			if (stu[j].rank == i)
			{
				cout << stu[j].name << "  " << stu[j].number << "  " << stu[j].rank << "  " << stu[j].dailyScore
					<< "  " << stu[j].experScore << "  " << stu[j].finalScore << " " << stu[j].generalScore << endl;
				continue;
			}
		}
	}
}

void searchInformation(SS stu[], int N)
{
	char number[10];
	bool sign = false;
	cout << "������ѧ�Ž��в�ѯ" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> number[i];
		if (number[i] == NULL)
			break;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (number[j + 1] == NULL)
				{
					cout << stu[i].name << "  " << stu[i].number << "  " << stu[i].rank << "  " << stu[i].dailyScore
						<< "  " << stu[i].experScore << "  " << stu[i].finalScore << " " << stu[i].generalScore << endl;
					sign = true;
				}
			}
			
			
		}
		if(sign==false)
		{
			cout << "δ���ҵ���ѧ��" << endl; 
			break;
		}
	}

}



/*int calcuAver(SS a[], int N)
{
	int totalScore = 0, averageScore = 0;
	for (int i = 0; i < N; i++)
		totalScore += a[i];
	averageScore = totalScore / N;
	return averageScore;
}*/

double calcuAver(SS stu[], int N)
{
	double //dailyAverage = 0,
		//finalAverage = 0,
		//experAverage = 0,
		generalAverage = 0;

	for (int i = 0; i < N; i++)
	{
		//		dailyAverage += stu[i].dailyScore;

		//		finalAverage += stu[i].finalScore;

		//		experAverage += stu[i].experScore;

		generalAverage += stu[i].generalScore;

	}
	//	dailyAverage = dailyAverage / N;
	//	finalAverage = finalAverage / N;
	//	experAverage = experAverage / N;
	generalAverage = generalAverage / N;
	cout << "��ƽ����Ϊ��" << generalAverage << endl;
	return generalAverage;
}

double calcuVar(SS stu[], int N)
{
	double //dailyVar = 0,
		//finalVar = 0,
		//experVar = 0,
		M = calcuAver(stu, N),	//���������calcuAver�����ͻ�ִ�к������ڵ�������䣬�ʻ����ƽ���ֵ���Ϣ
		generalVar = 0;
	for (int i = 0; i < N; i++)
	{
		generalVar += (stu[i].generalScore - M) *(stu[i].generalScore - M);

	}
	generalVar = generalVar / N;
	cout << "����Ϊ��" << generalVar << endl;
	return generalVar;

}