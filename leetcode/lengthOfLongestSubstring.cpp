#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    /*
    for i in range(len(s)):
        for j in range(i+1,len(s)):
            identical = 0
            for k in range(i,j):
                for m in range(k+1,j+1):
                    if s[k]==s[m]:
                        identical = 1
            if identical == 0:
                if j-i+1 > maxLength:
                    maxLength = j-i +1
    return maxLength
    */
    int maxLength;
    if (s.size() == 0)
    {
        return 0;
    }
    else
    {
        maxLength = 1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            int identical = 0;
            for (int k = i; k < j; k++)
            {
                for (int m = k + 1; m < j + 1; m++)
                {
                    if (s[k] == s[m])
                    {
                        identical = 1;
                    }
                }
            }
            if (identical == 0)
            {
                if (j - i + 1 > maxLength)
                {
                    maxLength = j - i + 1;
                }
            }
        }
    }
    return maxLength;
}

int main()
{
    string s1("abc");
    cout << lengthOfLongestSubstring(s1)<<endl;
    s1 = "aaaaaaa";
    cout << lengthOfLongestSubstring(s1)<<endl;
    s1 = "abcabcbb";
    cout << lengthOfLongestSubstring(s1)<<endl;
    s1 = "pwwkew";
    cout << lengthOfLongestSubstring(s1)<<endl;
}