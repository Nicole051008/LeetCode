class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        # init
        result = [-1, -1]
        left = 0
        right = len(nums) - 1

        # binary search for starting position
        while left <= right:
            mid = (left + right) // 2

            if nums[mid] == target:
                result[0] = mid
                right = mid - 1

            # search right part
            elif nums[mid] < target:
                left = mid + 1

            # search left part
            else:
                right = mid - 1

        # init
        left = 0
        right = len(nums) - 1

        # binary search for ending position
        while left <= right:
            mid = (left + right) // 2

            if nums[mid] == target:
                result[1] = mid
                left = mid + 1

            # search right part
            elif nums[mid] < target:
                left = mid + 1

            # search left part
            else:
                right = mid - 1

        return result