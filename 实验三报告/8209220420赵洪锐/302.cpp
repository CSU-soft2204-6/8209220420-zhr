#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 1)cout << "请您重新输入一个大于一的自然数" << endl;
	for (int i = num; num % i == 0; i--)
	{
		if (i == 1)
		{
			return false;
		}
		if (i != 1)
		{
			return true;
		}
	}
}
int main()
{
	int num = 1;
	int array[200] = { 0 };
	int numX[20][10] = { 0 };
	int s = 1;
	while(1)
	{
		if (s == 201)break;
		
		if (is_prime(num)) 
		{
			array[s-1] = num;
			s++;
		}
		num++;
	}
	int a = 0;
	while(a<200)
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			numX[i][j] = array[a];
			a++;
		}
		
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << numX[i][j] << "  ";
		}
		cout << endl;
	}
}