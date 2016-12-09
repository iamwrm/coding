#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	string line, word;
	getline(cin, line);
	stringstream stream(line);
	vector<string> v;
	while (stream >> word)
	{
		
		cout << word<<endl;
		v.push_back(word);
	}
	sort(v.begin(), v.end());


	for (int  i = 0; i < v.size(); i++)
	{
		cout << v[i]<<" ";

	}

	system("pause");
	return 0;
}