#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	float x = 0; float tem = 0; float a = 0;
	cin >> a;
	x = a;
	while (1)
	{
		if (x < 0)
		{
			cout << "����û��ƽ����" << endl;
			return 0;
		}
		tem = (x + a / x) / 2;
		if (fabs(tem - x) < 1e-5) break;//fab�����������ֵ����
		x = tem;
	}
	cout << "x=" << x;
}