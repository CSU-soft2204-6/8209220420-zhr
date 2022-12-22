#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "请输入三角形的三边长" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	int C = 0;
	C = a + b + c;
	cout << "周长为:" << C << endl;
	if (a == b || a == c || b == c)
	{
		cout << "该三角形为等腰三角形";
	}
	else {
		cout << "该三角形不是等腰三角形";
	}
}