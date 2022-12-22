#include<iostream>
using namespace std;
int main()
{
	char a = '0';
	while (1)
	{
		cout << "请输入 一个英文字母:";
		cin >> a;
		if (a < 'A' || a>'z' || (a > 'Z' && a < 'a'))
		{
			cout << "你输入的不是英文字母" << endl;
			system("pause");
			
		}
		else break;
	}
	system("pause");
	
	if (a > 'a' && a < 'z')//如果是小写字母就转换为大写
	{
		cout << "你输入的字母为：" << a - 32;
	}
	else { 
		cout << (int)a+1;
	      }//如果是大写就转化为对应的ASCII码输出
	
	return 0;
}