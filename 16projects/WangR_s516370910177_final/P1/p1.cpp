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

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    string output;

    for (int i = 0; i < input.size(); i++)
    {
        char temp = input[i];
        switch (temp)
        {
            case 'a':
                temp = 'z';
                break;
            case 'A':
                temp = 'Z';
                break;
            case '0':
                temp = '9';
                break;
            default:
                temp--;
                break;
        }
        output.push_back(temp);
    }

    cout << output;
    return 0;
}