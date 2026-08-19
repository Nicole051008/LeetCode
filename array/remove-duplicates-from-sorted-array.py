class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # init
        pointer = 0
        temp = None

        # move unique elements to the front
        for i in range(len(nums)):
            if nums[i] != temp:
                temp = nums[i]
                nums[pointer] = nums[i]
                pointer += 1

        # return the number of unique elements
        return pointer