#include <iostream>
#include <vector>



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