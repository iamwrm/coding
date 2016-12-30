#include <iostream>
#include <vector>

using namespace std;

template<class T>
inline void swapMy(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

class myPoly
{
private:
    vector<int> powMy;
    vector<double> coeMy;
    string name;
public:
    myPoly(string namein)
    {
        name=namein;
        powMy.push_back(0);
        coeMy.push_back(0);
    }

    void showAll();

    void assign(int pow, double coe);
};


int main()
{
    myPoly m1("m1");
    m1.showAll();

    m1.assign(8, -2.33);
    m1.showAll();


    m1.assign(18, 2.22222);
    m1.showAll();

    m1.assign(21, 123);
    m1.showAll();

    return 0;
}

void myPoly::showAll()
{
    cout<<name<<": ";
    for (auto it = powMy.begin(); it != powMy.end(); ++it)
    {
        auto dev = it - powMy.begin();


        if (*(it) != 0)
        {
            if ((coeMy[dev] > 0)&&(dev!=0))
            {
                cout << " +";
            }

            if ((coeMy[dev] < 0)&&(dev!=0))
            {
                cout << " ";
            }
            cout << coeMy[dev] << "x^" << powMy[dev];
        }
        else
        {
            if ((powMy.size() == 1) && (coeMy[0] == 0))
            {
                cout << coeMy[0] << endl;
                return;
            }
            cout << " +" << coeMy[dev];
        }
    }
    cout << endl;
    return;
}

void myPoly::assign(int pow, double coe)
{

    if (pow < 0)
    {
        cout << "\nerror! negative power\n";
        return;
    }

    int FLAG = 1;


    for (int i = 0; i < powMy.size(); ++i)
    {
        if (powMy[i] == pow)
        {
            FLAG = 0;

            if (coe == 0)
            {
                powMy.erase(powMy.begin() + i);
                coeMy.erase(coeMy.begin() + i);
            }

            coeMy[i] = coe;
        }
    }

    if ((FLAG == 1) && (coe != 0))
    {
        powMy.push_back(pow);
        coeMy.push_back(coe);

        // sort
        for (int i = 0; i < powMy.size(); ++i)
        {
            for (int j = 0; j < powMy.size() - i - 1; ++j)
            {
                if (powMy[j] < powMy[j + 1])
                {
                    swapMy(powMy[j], powMy[j + 1]);
                    swapMy(coeMy[j], coeMy[j + 1]);
                }
            }
        }
        // end sort

    }

}
