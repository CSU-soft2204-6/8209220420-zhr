/*�����*/
#include<iostream>
using namespace std;
int main()

{
	float a = 0, c = 0;
	char b = '0';
	putin:
	{
		cout << "������Ҫ����ı��ʽ : ";
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
			cout << "��������Ϊ�㣬����������" << endl;
			system("pause");
			system("cls");
			goto putin;
		}
			cout << a / c << endl;
			break;
		case '%':cout << a / c << endl;
			break;
		default: cout << "��������Ϸ�" << endl;
			system("pause");
			system("cls");
			goto putin;
	    }
   
		


	}

	return 0;
}