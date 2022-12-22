#include<iostream>
using namespace std;
//f1为最大公约数，f2为最小公倍数
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
	cout << "请输入m" << endl;
	cin >> m;
	cout << "请输入N=n" << endl;
	cin >> n;
	cout << "m和n得最大公约数是 " << f1(m, n) << endl;
	cout << "m和n得最小公倍数是 " << f2(m, n) << endl;
}