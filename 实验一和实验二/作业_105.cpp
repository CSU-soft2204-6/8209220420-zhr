/*********************    �����ܣ��¶ȵ�λ����                            ***************************/
#include<iostream>
using namespace std;
int main()
{
	float temprature = 0;
	cout << "������Ҫת���Ļ��϶��µ��¶ȣ�";
	cin >> temprature;
	cout << "��ת���Ļ��϶�Ϊ��" << temprature<<"�H" << endl;
	cout << "���¶ȵ�λΪ���϶�ʱΪ��" << (temprature - 32) / 1.8 <<"��" << endl;
	return 0;

}