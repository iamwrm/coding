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
public:
    myPoly()
    {
        powMy.push_back(0);
        coeMy.push_back(0);
    }

    myPoly &showAll();

    myPoly &assign(int pow, double coe);

    myPoly operator+(myPoly other) const;

    myPoly &add(int pow, double coe);

    myPoly operator*(myPoly other)const ;
};


int main()
{
    myPoly m1, m2;

    m1.assign(1, 1.1).assign(3, 3.3).assign(5, 5.5).showAll();
    m2.assign(2, 2.2).assign(4, 4.4).assign(6, 6.6).showAll();

    cout << "========" << endl;


    m1.showAll();
    m2.showAll();
    m2 = m2 + m1;

    m2.showAll();

    cout << "----------------\n";

    myPoly mm1, mm2, mm3;

    mm1.assign(1, 1).add(0, -1).showAll();
    mm2.add(1, 1).add(0, -2).showAll();

//    mm3 = mm1 * mm2;
    mm3 = mm1 + mm2;
    mm3.showAll();

    return 0;
}

myPoly &myPoly::showAll()
{

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
            if (coeMy[dev] >= 0) cout << " +";
            else cout << " ";
            cout << coeMy[dev];
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

myPoly myPoly::operator+(const myPoly other) const
{
    myPoly tempmp;

    for (int i = 0; i < other.powMy.size(); i++)
    {
        int has_assigned = 0;
        int temppow = other.powMy[i];
        double tempcoe = other.coeMy[i];

        for (int j = 0; j < this->powMy.size(); ++j)
        {
            if (this->powMy[j] == temppow)
            {
                tempcoe += this->coeMy[j];
                tempmp.assign(other.powMy[i], tempcoe);
                has_assigned = 1;
            }

        }

        if (has_assigned == 0)
        {
            tempmp.assign(other.powMy[i], other.coeMy[i]);
        }

    }


    return tempmp;

}

myPoly myPoly::operator*(myPoly other)const
{
    myPoly temp;
    for (int i = 0; i < other.powMy.size(); i++)
    {
        for (int j = 0; j < this->powMy.size(); ++j)
        {
            int temppow = other.powMy[i] + this->powMy[j];
            double tempcoe = other.coeMy[i] * this->coeMy[j];
            temp.add(temppow, tempcoe);
        }
    }

    return temp;
}

myPoly &myPoly::add(int pow, double coe)
{
    myPoly temp;
    temp.assign(pow, coe);
    *this = *this + temp;
    return *this;
}





