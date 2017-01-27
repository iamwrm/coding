//
// Created by 王韧 on 2016/12/28.
// implementing my own sorting function by using function pointer

#include <iostream>
#include <cmath>

using namespace std;

template <class T>
void mysort(T &a, T &b, int (*compare)(const T &a, const T &b))
{
    if ((*compare)(a, b) < 0)
    {
        T temp;
        temp = a;
        a = b;
        b = temp;
    }
}


template <class T>
int mycompare1(const T &a, const T &b)
{
    if (a < b)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}


template <class T>
int mycompare2(const T &a, const T &b)
{
    if (abs(a)<abs(b)){
        return -1;
    }
    else{
        return 1;
    }
}


int main()
{

    double a1, a2;
    a1 = 2;
    a2 = -3;


    std::cout << "a1:" << a1 << "     a2:" << a2 << std::endl;


    int (*fun_p)(const double &a, const double &b)=&mycompare1;

    mysort(a1, a2, fun_p);

    std::cout << "a1:" << a1 << "     a2:" << a2 << std::endl;

    int (*fun_p1)(const double &a, const double &b)=&mycompare2;

    mysort(a1, a2, fun_p1);

    std::cout << "a1:" << a1 << "     a2:" << a2 << std::endl;

    return 0;
}