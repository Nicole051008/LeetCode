class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

    # init
    found = False
    left = 0
    right = len(nums) - 1

    # binary search
    while left <= right:

        mid = (left + right) // 2

        # if founf
        if nums[mid] == target:

            # set mid as the starting postion
            result[0] = mid

            # find ending position
            for i in range(mid, right):
                if nums[i] != target:
                    result[1] = i - 1
                    return result

            # the remain number are all targeted value
            result[1] = len(nums) - 1
            return result

        # search right part
        elif nums[mid] < target:
            left = mid + 1

        # search left part
        else:
            right = mid - 1
        
    # not found
    return [-1,-1]