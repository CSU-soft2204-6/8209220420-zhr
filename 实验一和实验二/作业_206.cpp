/*���ܣ�����С�����������Լ��*/
#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0;
	cout << "������a" << endl;
	cin >> a;
	cout << "������b" << endl;
	cin >> b;
	system("pause");
	system("cls");
	cout << "a= " <<a<< "\t" << "b= " << b<<endl;
	for (float i = a > b ? a : b; i >= a < b ? a : b; i--)
	{
		if (a / i == (int)(a / i) && b / i == (int)(b / i))//�ж��Ƿ�Ϊ��Լ��
		{
			cout << "a��b�����Լ��Ϊ��" <<i<< endl;
			break;
		}
		
	}
	for (float i = a > b ? a : b; ; i++)
	{
		if (i / a == (int)(i / a) && i / b == (int)(i / b))
		{
			cout << "a��b����С������Ϊ��"<<i << endl;
			break;
		}
	}
	return 0;
}