#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "0";
	getline(cin, str);
	cout << endl;
	int ��ĸ = 0, �ո� = 0, ���� = 0, ���� = 0;
	int i = 0;
	while(i< str.length())
	{
		if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) ��ĸ++;
		else if (str[i] == ' ') �ո�++;
		else if (str[i] >= '0' && str[i] <= '9')����++;
		else  ����++;
		i++;
		
	}
	cout << "��ĸ��Ϊ" << ��ĸ << endl;
	cout << "������Ϊ" << ���� << endl;
	cout << "�ո���Ϊ" << �ո� << endl;
	cout << "�����ַ���Ϊ" << ���� << endl;
	system("pause");
}