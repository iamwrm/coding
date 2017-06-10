#include <iostream>
#include <vector>

using namespace std;

int hammingDistance(int x, int y)
{
    vector<int> xb, yb;
    while (x > 1)
    {
        xb.push_back(x % 2);
        x = x / 2;
    }
    if (x != 0)
    {
        xb.push_back(1);
    }
    else
    {
        xb.push_back(0);
    }
    while (y > 1)
    {
        yb.push_back(y % 2);
        y = y / 2;
    }
    if (y != 0)
    {
        yb.push_back(1);
    }
    else
    {
        yb.push_back(0);
    }

    while (xb.size() > yb.size())
    {
        yb.push_back(0);
    }
    while (xb.size() < yb.size())
    {
        xb.push_back(0);
    }
    int distance = 0;
    for (int i = 0; i < yb.size(); i++)
    {
        if (yb[i] != xb[i])
        {
            distance++;
        }
    }
    return distance;
}

int main()
{

    std::cout << hammingDistance(8, 7);

    return 0;
}