#include <iostream>

using namespace std;


std::string uint8ToBin(int x);


int main()
{
    int x = 233;
    string hehe = uint8ToBin(x);
    cout << hehe;
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
