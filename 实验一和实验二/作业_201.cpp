#include<iostream>
using namespace std;
int main()
{
	char a = '0';
	while (1)
	{
		cout << "������ һ��Ӣ����ĸ:";
		cin >> a;
		if (a < 'A' || a>'z' || (a > 'Z' && a < 'a'))
		{
			cout << "������Ĳ���Ӣ����ĸ" << endl;
			system("pause");
			
		}
		else break;
	}
	system("pause");
	
	if (a > 'a' && a < 'z')//�����Сд��ĸ��ת��Ϊ��д
	{
		cout << "���������ĸΪ��" << a - 32;
	}
	else { 
		cout << (int)a+1;
	      }//����Ǵ�д��ת��Ϊ��Ӧ��ASCII�����
	
	return 0;
}