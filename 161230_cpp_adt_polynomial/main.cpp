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
        name = namein;
        powMy.push_back(0);
        coeMy.push_back(0);
    }

    myPoly &showAll();

    myPoly &assign(int pow, double coe);

    myPoly operator+(myPoly other);


    myPoly setname(string namein)
    {
        name = namein;
        return *this;
    }

    myPoly &operator*(myPoly other);
};


int main()
{
    myPoly m1("m1"), m2("m2");

    m1.assign(1, 1.1).assign(3, 3.3).assign(5, 5.5).showAll();
    m2.assign(2, 2.2).assign(4, 4.4).assign(6, 6.6).showAll();

    cout << "========" << endl;


    m1.showAll();
    m2.showAll();
    m2 = m2 + m1;
    return 0;
}

myPoly &myPoly::showAll()
{
    cout << name << ": ";

    for (auto it = powMy.begin(); it != powMy.end(); ++it)
    {
        auto dev = it - powMy.begin();


        if (*(it) != 0)
        {
            if ((coeMy[dev] > 0) && (dev != 0))
            {
                cout << " +";
            }

            if ((coeMy[dev] < 0) && (dev != 0))
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
                return *this;
            }
            cout << " +" << coeMy[dev];
        }
    }
    cout << endl;
    return *this;
}

myPoly &myPoly::assign(int pow, double coe)
{

    if (pow < 0)
    {
        cout << "\nerror! negative power\n";
        return *this;
    }

    int FLAG = 1;//FlAG=1   no this coefficent
    // append one



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
            else
            {
                coeMy[i] = coe;
            }

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

    return *this;

}

myPoly myPoly::operator+(const myPoly other)
{
    for (int i = 0; i < other.powMy.size(); i++)
    {
        int has_assigned = 0;
        int temppow = other.powMy[i];
        double tempcoe = other.coeMy[i];

        for (int j = 0; j < this->powMy.size(); ++j)
        {
            if (this->powMy[j] == temppow)
            {
//                coeMy[j] += tempcoe;
                tempcoe += coeMy[j];
                assign(other.powMy[i], tempcoe);
                has_assigned = 1;
            }

        }

        if (has_assigned == 0)
        {
            assign(other.powMy[i], other.coeMy[i]);
        }

    }


    return *this;

}

myPoly &myPoly::operator*(myPoly other)
{
    return myPoly(__1::basic_string<char, char_traits<char>, allocator<char>>());
}





