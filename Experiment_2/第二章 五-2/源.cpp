#include <iostream>
using namespace std;
const double pi = 3.14; //const double �� double const ������
int main()
{
	double r;
	cout << "������뾶��" << endl;
	cin >> r;
	cout << "�ܳ�Ϊ��" << 2*pi*r << endl
		 << "���Ϊ��" << pi*r*r << endl;
	system("pause");
	return 0;
}