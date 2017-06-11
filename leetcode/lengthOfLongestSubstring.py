


def lengthOfLongestSubstring(s):
    if s == "":
        return 0
    else:
        maxLength=1
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



s = "pwwkew"     
print(lengthOfLongestSubstring(s))   
s = "abcabcbb"
print(lengthOfLongestSubstring(s))   
s = "bbbbbbb"
print(lengthOfLongestSubstring(s))   
s = ""
print(lengthOfLongestSubstring(s))   
s= "au"
print(lengthOfLongestSubstring(s))   