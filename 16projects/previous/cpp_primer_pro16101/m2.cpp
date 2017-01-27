#include <iostream> //尝试用指针传多个值给函数

void add1(int *ass, int *ass1)
{
    *ass = *ass + 1;
    *ass1 = *ass1 + 2;
}
int main(int argc, char const *argv[])
{
    int a, b = 0;
    int *ass;
    int *ass1;
    ass =&a;
    ass1= &b;
    add1(ass, ass1);
    std::cout<< a << ' ' << b << std::endl;
    return 0;
}