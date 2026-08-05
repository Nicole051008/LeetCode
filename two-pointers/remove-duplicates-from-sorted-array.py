class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        pointer = 0
        temp = None

        for i in range(len(nums)):
            if nums[i] != temp:
                temp = nums[i]
                nums[pointer] = nums[i]
                pointer += 1

        
        return pointer