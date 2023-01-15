#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream ofs;
	//ofs.open("zzz.text", ios::out);
	//ofs << "the first line" << endl << "the second line" << endl << "the third line" << endl;
	ofs.open("zzz.text", ios::out);
	ofs << "1" << endl;
	ofs << "12" << endl;
	ofs << "123" << endl;
	ofs.close();
	ifstream ifs;
	ifs.open("zzz.text", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
		}
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;;
	}
	system("pause");
	ifs.close();
	return 0;
}