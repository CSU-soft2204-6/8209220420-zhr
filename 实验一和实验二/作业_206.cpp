/*功能：求最小公倍数及最大公约数*/
#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0;
	cout << "请输入a" << endl;
	cin >> a;
	cout << "请输入b" << endl;
	cin >> b;
	system("pause");
	system("cls");
	cout << "a= " <<a<< "\t" << "b= " << b<<endl;
	for (float i = a > b ? a : b; i >= a < b ? a : b; i--)
	{
		if (a / i == (int)(a / i) && b / i == (int)(b / i))//判断是否为公约数
		{
			cout << "a和b的最大公约数为：" <<i<< endl;
			break;
		}
		
	}
	for (float i = a > b ? a : b; ; i++)
	{
		if (i / a == (int)(i / a) && i / b == (int)(i / b))
		{
			cout << "a和b的最小公倍数为："<<i << endl;
			break;
		}
	}
	return 0;
}