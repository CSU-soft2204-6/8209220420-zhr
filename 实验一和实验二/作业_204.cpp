/*计算机*/
#include<iostream>
using namespace std;
int main()

{
	float a = 0, c = 0;
	char b = '0';
	putin:
	{
		cout << "请输入要计算的表达式 : ";
		cin >> a >> b >> c;
		switch (b)
		{
		case '+':cout << a + c << endl;
			break;
		case '-':cout << a - c << endl;
			break;
		case '*':cout << a * c << endl;
			break;
		case '/':if (c == 0)
		{
			cout << "除数不能为零，请重新输入" << endl;
			system("pause");
			system("cls");
			goto putin;
		}
			cout << a / c << endl;
			break;
		case '%':cout << a / c << endl;
			break;
		default: cout << "运算符不合法" << endl;
			system("pause");
			system("cls");
			goto putin;
	    }
   
		


	}

	return 0;
}