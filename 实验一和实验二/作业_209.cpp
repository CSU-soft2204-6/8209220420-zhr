/*苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过 100 的最大值，求每天平均花多少钱。*/
#include<iostream>
using namespace std;
int main()
{
	int i = 0;//i代表天数 
	int j = 2;//第i天买得苹果数
	int sum = 0;//第i天得苹果总数
while(j<=100)
{
	i++;
	sum = sum + j;
	j = j * 2;
}

cout << "苹果总数为：" << sum;
cout << "均价" << sum*0.8 / i;
}