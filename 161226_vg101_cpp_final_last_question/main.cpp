#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;


std::string uint8ToBin(int x);

std::string FileToString(std::string sFileName);


int main()
{

// Test uint8ToBin
//    int x;
//    cout << "Please input a number among [0 255]: ";
//    cin >> x;
//    cout << uint8ToBin(x) << endl;


// Test FileToString
    string sCode = FileToString("P5-Encodedfile.dat");
    cout << sCode << endl;




// Test Decode
//    cout << Decode(sCode) << endl;


    return 0;
}


std::string uint8ToBin(int x)
{
// 0<=x<=255
    string s1("00000000");
    int temp = x;
    for (int i = 0; temp > 0; i++)
    {
        if (temp % 2 == 1)
        {
            if (7 - i < 0)
            {
                cout << "error! 7-i<0\n";
                s1 = "NaN";
                break;

            }
            s1[7 - i] = '1';
            temp = (temp - 1) / 2;
        }
        else
        {
            temp /= 2;
        }

    }
    return s1;
}

std::string FileToString(std::string sFileName)
{
// f77a d00a 070a
    fstream f_in_b(sFileName, ios::binary | ios::in);
    string file_string;

    std::vector<int> v1;

    int temp;


    while (f_in_b.read(reinterpret_cast<char * >(&temp ), 1))
    {
        v1.push_back(temp);
    }

    string converted = "";

    int i = 0;
    for (i = 0; i < v1.size() - 2; i++)
    {
        string temps;

        temps = uint8ToBin(v1[i]);
        converted = converted + temps;

    }

    string l1;
    l1 = uint8ToBin(v1[i++]);

    int n_in_last_string = v1[v1.size() - 1];

    string l1p;
    l1p = l1.substr(8 - n_in_last_string);

    converted = converted + l1p;
    return converted;
}

