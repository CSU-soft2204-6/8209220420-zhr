/*                                �����λ���е�����ˮ�ɻ���                                      */
#include<iostream>
using namespace std;
int main()
{
	
	int num = 100;
	int a, b, c;
	do
	{
		++num;
		a = num % 10;//��ȡʮλ
		b = num / 10 % 10;//��ȡ��λ
		c = num / 100;//��ȡ��λ
		if (num == a*a*a + b*b*b + c*c*c)//Ӧע�⣺��=����ʾ��ֵ������==����ʾ�ж�
		{
			cout << num << endl;
		}
	} while (num < 1000);
	
	
	return 0;
}
