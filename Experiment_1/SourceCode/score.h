
#include <iostream>
using namespace std;


typedef struct
{
	char number[10];  //ѧ��
	char name[10];    //����
	int rank;		  //����
	double dailyScore;   //ƽʱ�ɼ�
	double finalScore;   //��ĩ�ɼ�
	double experScore;	 //ʵ��ɼ�
	double generalScore; //�����ɼ�

}SS;


/*---------------��������-------------------*/

//1.��ȡѧ����������
void readData(SS stu[], int N);
//SS* readDataFromFile(int *N);//����

//2.����N��ѧ���������ɼ�
void calcuScore(SS stu[], int N);


//3.���������ɼ�����
void sortScore(SS stu[], int N);


//4.����һ���ĸ�ʽ���N��ѧ����������Ϣ ѡ����������ɸߵ���
void printOut(SS stu[], int N);

//5.����ѧ�Ų�ѯĳ��ͬѧ�ĳɼ���Ϣ
void searchInformation(SS stu[], int N);

//6.ͳ�Ƴɼ��ľ�ֵ
double calcuAver(SS stu[] , int N);

//7.ͳ�Ƴɼ�����
double calcuVar(SS stu[], int N);