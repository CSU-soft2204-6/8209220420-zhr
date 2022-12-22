/* 功能：y关于x的分段函数 */
#include<iostream>;
using namespace std;
int main()
{
	float  x = 0 , y = 0 ;
	
	while (1)
	{
		cout << "请输入x : ";
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			break;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / 4 / x + 1;
			break;
		}
		else if (x >= 5 && x < 10)
		{
			y = x * x;
			break;
		}
		else {
			cout << "您输入的x不在定义域内" << endl;
			system("pause");
		    system("cls");
		}
	}
	
	cout << "x对应的 y = " << y << endl;

}