#include<iostream>
using namespace std;
//f1Ϊ���Լ����f2Ϊ��С������
int m, n;
int f1(int &m,int &n)
{
	for (int i =(m < n ? m : n); ;i--)
	{
		int num;
		if(m%i==0&&n%i==0)
		{
			num = i;
			return num;
		}
	}
}
int f2(int& m, int& n)
{
	for (int i = (m >n ? m : n); ; i++)
	{
		int num;
		if (i %m  == 0 && i % n == 0)
		{
			num = i;
			return num;
		}
	}
}
int main()
{
	cout << "������m" << endl;
	cin >> m;
	cout << "������N=n" << endl;
	cin >> n;
	cout << "m��n�����Լ���� " << f1(m, n) << endl;
	cout << "m��n����С�������� " << f2(m, n) << endl;
}