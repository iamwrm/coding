#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

double GetPercentile60(double *parr, long n);

int main(int argc, char const *argv[])
{
    string input;
    getline(cin, input);

    stringstream inputstream(input);
    vector<double> v1;
    double temp = 0;
    while (inputstream >> temp)
    {
        v1.push_back(temp);
    }
    cout << v1.size();
//
    double *data;
    data = new double[v1.size()];

    for (int i = 0; i < v1.size(); i++)
    {
        *(data + i) = v1[i];
    }

    double result = GetPercentile60(data, v1.size());
    cout << result;

    delete[]data;
    //system("pause");
    return 0;
}

double GetPercentile60(double *parr, long n)
{
    sort(parr, parr + n);
    int i = 0;
    for (; i < n; i++)
    {
        if (i + 1 >ceil (n * 0.6))
        {
            break;
        }
    }

    return *(parr + i);
}