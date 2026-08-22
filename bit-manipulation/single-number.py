class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # init
        result = 0

        # use XOR to cancel out duplicate numbers
        for num in nums:
            result ^= num

        # return the single number
        return result