/* ���ܣ�y����x�ķֶκ��� */
#include<iostream>;
using namespace std;
int main()
{
	float  x = 0 , y = 0 ;
	
	while (1)
	{
		cout << "������x : ";
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			break;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / 4 / x + 1;
			break;
		}
		else if (x >= 5 && x < 10)
		{
			y = x * x;
			break;
		}
		else {
			cout << "�������x���ڶ�������" << endl;
			system("pause");
		    system("cls");
		}
	}
	
	cout << "x��Ӧ�� y = " << y << endl;

}