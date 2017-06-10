class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i,j in nums:
            if (not (i == j )) and (i+j == nums):
                return i.