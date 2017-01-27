/*
 * This file is to try "for_each" loop in c++
 */



#include <iostream>

#include <vector>

using namespace std;

void pprint(const int &i);

int main()
{

    vector<int> v1;

    int my_array[5] = {1, 2, 3, 4, 5};
    // double the value of each element in my_array:
    for (int &x : my_array)
    {
        x *= 2;
    }


    for (int i = 0; i < 5; ++i)
    {
        cout<<my_array[i]<<endl;
    }
    cout<<endl<<endl;

    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(i);
    }

    for_each(v1.begin(), v1.end(), pprint);


    return 0;

}


void pprint(const int &i)
{
    std::cout << i * 10 + i << std::endl;
}