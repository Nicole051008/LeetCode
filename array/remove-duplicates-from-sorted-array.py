class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        result = []
        temp = x
        for cur in nums:
            if cur != temp:
                result.append(cur)
                temp = cur
        
        return result