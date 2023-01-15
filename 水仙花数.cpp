/*                                求出三位数中的所有水仙花数                                      */
#include<iostream>
using namespace std;
int main()
{
	
	int num = 100;
	int a, b, c;
	do
	{
		++num;
		a = num % 10;//获取十位
		b = num / 10 % 10;//获取百位
		c = num / 100;//获取个位
		if (num == a*a*a + b*b*b + c*c*c)//应注意：”=“表示赋值，而”==“表示判断
		{
			cout << num << endl;
		}
	} while (num < 1000);
	
	
	return 0;
}
