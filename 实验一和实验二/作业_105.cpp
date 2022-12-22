/*********************    程序功能：温度单位换算                            ***************************/
#include<iostream>
using namespace std;
int main()
{
	float temprature = 0;
	cout << "请输入要转换的华氏度下的温度：";
	cin >> temprature;
	cout << "待转换的华氏度为：" << temprature<<"℉" << endl;
	cout << "该温度单位为摄氏度时为：" << (temprature - 32) / 1.8 <<"℃" << endl;
	return 0;

}