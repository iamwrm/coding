#include <iostream>
#include <vector>

using namespace std;

#include "./c.h"

int main()
{
    vector<int> nums;
    for (int i = 1; i < 10; i++)
    {
        nums.push_back(i);
    }
    
    vector<int> a = twoSum(nums, 17);
    cout << a[0] << a[1];
    return 0;
}