#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "�����������ε����߳�" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	int C = 0;
	C = a + b + c;
	cout << "�ܳ�Ϊ:" << C << endl;
	if (a == b || a == c || b == c)
	{
		cout << "��������Ϊ����������";
	}
	else {
		cout << "�������β��ǵ���������";
	}
}