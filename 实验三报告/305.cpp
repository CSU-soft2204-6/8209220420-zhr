//���ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ�����ڶ����ֽ�ʣ�µ�
//���ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ����� 10 �죬����ֻʣ���һ�����ӣ��ʣ���һ����ӹ�ժ
//�������ӣ��õݹ�ʵ�֣���a n+1=a n /2 -1
#include<iostream>
using namespace std;
int f(int n) {
	if (n == 10) { return 1; }
	return (f(n+1)+1)*2;
}
int main()
{
	int x = 1;
	int value = 0;
	value = f(1);
	/*for (int i = 1; i <= 10; i++)
	{
		cout << f(i) << endl;
	}*/
	cout << "���ӵ�һ��һ��ժ��" << value << "������" << endl;
}