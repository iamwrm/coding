#include <iostream>


class Mycom
{
private:
    double re;
    double im;


public:


    Mycom()
    {
        re = im = 0;
    }

    Mycom &setRE(double inputNum)
    {
        re = inputNum;
        return *this;
    }

    Mycom &setIM(double inputNum)
    {
        im = inputNum;
        return *this;
    }

    Mycom &valueDouble()
    {
        re *= 2;
        im *= 2;
        return *this;
    }

    Mycom &valueTriple()
    {
        re *= 3;
        im *= 3;
        return *this;
    }

    Mycom &valueHalf()
    {
        re *= 0.5;
        im *= 0.5;
        return *this;
    }

    Mycom &show()
    {
        std::cout << re << " ";
        if (im < 0)
        {
            std::cout << "-" << (-im) << " i\n";
        }
        else
        {
            std::cout << "+" << (im) << " i\n";
        }
        return *this;

    }

};


int main()
{

    Mycom m1;

    m1.show();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}