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

string AddNum(const string & num1, const string & num2, int b);

int main()
{
	int base;
	string num1, num2;
	cout << "Please input base (2-16): ";
	cin >> base;
	cout << "Please input num1: ";
	cin >> num1;
	cout << "Please input num2: ";
	cin >> num2;
	cout << "num1 + num2 = " << AddNum(num1, num2, base) << endl;
	return 0;
}

string AddNum(const string & num1, const string & num2, int b)
{
	vector<int> n1, n2;
	for (int i = 0; i < num1.size(); i++)
	{
		int temp;
		if (isalpha(num1[i]))
		{
			temp = num1[i] - 'A' + 10;
		}
		else
		{
			temp = num1[i] - '0';
		}

		n1.push_back(temp);
	}

	for (int i = 0; i < num2.size(); i++)
	{
		int temp;
		if (isalpha(num2[i]))
		{
			temp = num2[i] - 'A' + 10;
		}
		else
		{
			temp = num2[i] - '0';
		}

		n2.push_back(temp);
	}

	if (n1.size() < n2.size())
	{
		swap(n1, n2);
	}

	for (int i = 0; i < n2.size(); i++)
	{
		n1[n1.size() - 1 - i] = n1[n1.size() - 1 - i] + n2[n2.size() - 1 - i];
	}
	
	for (int i = 1; i < n1.size(); i++)
	{
		if (n1[i] >= b)
		{
			n1[i] -= b;
			n1[i - 1]++;
		}
	}
	if (n1[0] >= b)
	{
		vector<int> vt;
		vt.push_back(1);
		n1[0] -= b;
		n1.insert(n1.begin(), vt.begin(), vt.end());
	}



	stringstream ss1;
	for (int i = 0; i < n1.size(); i++)
	{
		if (n1[i] >= 10)
		{
			ss1 << char(n1[i] - 10 + 'A');
		}
		else
		{
			ss1 << n1[i];
		}
	}
	
	string temp;
	ss1 >> temp;
	return temp;
}