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

int main(int argc, char const *argv[])
{
	uint8ToBin(127);

	system("pause");
	return 0;
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
	
	cout << 9-s.size()<< endl;
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