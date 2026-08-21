class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """

        # init
        count = 0

        # move valid elements to the front
        for i in range(len(nums)):
            if nums[i] != val:
                nums[count] = nums[i]
                count += 1

        # return the number of valid elements
        return count