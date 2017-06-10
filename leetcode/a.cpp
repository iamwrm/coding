#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "nums i :" << nums[i] << endl;
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                vector<int> res;
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
}

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