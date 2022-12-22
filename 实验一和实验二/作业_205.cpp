#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "0";
	getline(cin, str);
	cout << endl;
	int 字母 = 0, 空格 = 0, 数字 = 0, 其他 = 0;
	int i = 0;
	while(i< str.length())
	{
		if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) 字母++;
		else if (str[i] == ' ') 空格++;
		else if (str[i] >= '0' && str[i] <= '9')数字++;
		else  其他++;
		i++;
		
	}
	cout << "字母数为" << 字母 << endl;
	cout << "数字数为" << 数字 << endl;
	cout << "空格数为" << 空格 << endl;
	cout << "其他字符数为" << 其他 << endl;
	system("pause");
}