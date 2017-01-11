#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class mycom
{

    double Im;
    double Re;

  public:
    mycom()
    {
        Im = Re = 0;
    }
    void show()
    {
        cout << Re << " " << Im << endl;
    }
    void set(double i1, double i2)
    {
        Re = i1;
        Im = i2;
    }
    void get(double &i1, double &i2)
    {
        i1 = Re;
        i2 = Im;
    }
};

int main()
{
    string line, word;
    getline(cin, line);
    stringstream stream(line);
    vector<string> v;
    while (stream >> word)
    {
        cout << word << endl;
        v.push_back(word);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    mycom mmm1;
    mmm1.set(1, 2);

    return 0;
}
