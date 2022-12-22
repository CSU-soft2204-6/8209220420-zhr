#include<iostream>
using namespace std;
#include"temprature.h"
#include<iomanip>
int main()
{
	/*Celsius Fahrenheit | Fahrenheit Celsius
		40.0 105.0 | 120.0 48.89
		39.0 102.0 | 110.0 43.33 бнбн бнбн | бнбн бнбн
		31.0 87.8 | 30.0 - 1.11*/
	
	cout << "Celsius Fahrenheit | Fahrenheit Celsius" << endl;
	cout << setprecision(4) << 40.0 << " " << celsius_to_fah(40.0) << "|" << 120.0 << " " << fahrenheit_to_cels(120) << endl;
	cout << 39.0 << " " << celsius_to_fah(39.0) << "|" << 110.0 << " " << fahrenheit_to_cels(110) << endl;
	cout << 31.0 << " " << celsius_to_fah(31.0) << "|" << 30.0 << " " << fahrenheit_to_cels(30) << endl;
}