#include<iostream>
using namespace std;
/*1.��ӡ1-9������
  2.��ӡ1-9������
  3.�������������*/
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
