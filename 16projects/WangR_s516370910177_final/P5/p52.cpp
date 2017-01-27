#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

string uint8ToBin(int x);
string FileToString(string sFileName);

int main()
{
	// Test uint8ToBin
	int x;
	cout << "Please input a number among [0 255]: ";
	cin >> x;
	cout << uint8ToBin(x) << endl;
	// Test FileToString
	string sCode = FileToString("P5-Encodedfile.dat");
	cout << sCode << endl;
	//// Test Decode
	//cout << Decode(sCode) << endl;

	system("pause");
}

string uint8ToBin(int x)
{
	string s;
	s = " ";
	for (int a = x; a; a = a / 2)
	{
		s = s + (a % 2 ? '1' : '0');
	}
	std::reverse(s.begin(), s.end());
	
	//cout << 9-s.size()<< endl;
	int remain;
	remain = 9 - s.size();

	string qian;
	for (int i = 0; i < remain; i++)
	{
		qian.push_back('0');
	}
	s = qian + s;
	s = s.substr(0, 8);
	return s;
}

string FileToString(string sFileName)
{
	string temp;
	std::ifstream file_in(sFileName.c_str(), std::ios::binary);
	//file_in.open(sFileName.c_str(), std::ostream::in|ios::binary);

	string container;

	int nNum;
	char szBuf[256] = { 0 };

	file_in.read((char*)&nNum, sizeof(int));
	file_in.read(szBuf, sizeof(char) * 256);

	temp = uint8ToBin(nNum);
	//container = szBuf;


	//std::cout << "int = " << nNum << std::endl;
	//std::cout << "str = " << szBuf << std::endl;
	//


	//cout << container<<endl;
	//cout << "sie" << container.size();
	//cout << container;

	

	file_in.close();
	return temp;
}