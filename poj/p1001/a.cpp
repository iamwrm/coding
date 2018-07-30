#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

class LongNum {
	int *digits = nullptr;
	int digits_num;
	int exp_pos;

       public:
	LongNum(const string &num_input);
	~LongNum();
	LongNum times(const LongNum &ln1);
	LongNum exps(const int &expos);
	void print();
};

void LongNum::print()
{
	string output;
	for (int i = 0; i < digits_num; i++) {
		output.push_back(digits[i]);
	}

	if (exp_pos > 0) {
		output.insert(digits_num - exp_pos, 1, '.');
	}
	cout << endl << output << endl;
}

LongNum::~LongNum() { delete[] digits; }

LongNum LongNum::times(const LongNum &ln1)
{
	LongNum temp = ln1;
	return temp;
}

LongNum LongNum::exps(const int &expos)
{
	LongNum temp = *this;
	/* for (int i = 0; i < expos; i++) {
			temp = temp.times(*this);
		}
		*/
	return temp;
}

LongNum::LongNum(const string &ni)
{
	string local_ni = ni;
	// find .
	bool dot_found = false;
	int j = 0;
	for (j = 0; j < ni.size(); j++) {
		if (ni[j] == '.') {
			dot_found = true;
			break;
		}
	}

	exp_pos = ni.size() - j - 1;

	if (dot_found) {
		local_ni.erase(j, 1);
	}

	while (local_ni[0] == '0') {
		local_ni = local_ni.substr(1);
	}

	digits = new int[local_ni.size()];

	for (int i = 0; i < local_ni.size(); i++) {
		digits[i] = local_ni[i];
	}
	digits_num = local_ni.size();
}

int main(int argc, char const *argv[])
{
	string n1;
	int e1;
	cin >> n1 >> e1;

	LongNum templn(n1);

	// LongNum result = templn.exps(e1);
	// TODO: exps function has bugs
	templn.print();
	// result.print();
	return 0;
}