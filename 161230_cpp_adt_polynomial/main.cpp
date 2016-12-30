#include <iostream>
#include <vector>

using namespace std;

class myPoly
{
private:
    vector<int> powerMy;
    vector<double> coefMy;
public:
    myPoly()
    {
        vector<int> powerMy;
        vector<double> coefMy;
        powerMy.push_back(0);
        coefMy.push_back(0);
    }

    void showAll();

};


int main()
{
    myPoly m1;


    return 0;
}

void myPoly::showAll(){
    for (auto it = powerMy.begin(); it != powerMy.end(); ++it)
    {
        if (*(it) != 0)
        {

        }
        else
        {

        }
    }
    return;
}