//猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的
//桃子吃掉一半，又多吃一个，以后每天如此，到第 10 天，发现只剩最后一个桃子，问，第一天猴子共摘
//多少桃子（用递归实现）。a n+1=a n /2 -1
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
	cout << "猴子第一天一共摘了" << value << "个桃子" << endl;
}