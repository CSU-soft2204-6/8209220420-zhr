#include<iostream>
using namespace std;
/*1.打印1-9的行数
  2.打印1-9的列数
  3.行数与列数相乘*/
int main()
{
	for (int i = 1; i <= 9; i++)
	{
	
		for (int j = 1; j <= 9&&i>=j; j++)
		{
			cout << i << "*" << j<< "=" << i * j << "  ";;
			
		}
		cout << endl;
		
		
	}
	return 0;
}
