/***************** 功能：计算圆锥体积 ***********************/
#include<iostream>
using namespace std;
int main()
{
	float H = 0;
	float R = 0;
	float Π = 3.14;
	cout << "请输入圆锥的高 H" << endl;
	cin >> H;
	cout << "请输入圆锥的底面圆半径" << endl;
	cin >> R;
	cout << "圆锥体积为：" << Π * R * R * H / 3;

}