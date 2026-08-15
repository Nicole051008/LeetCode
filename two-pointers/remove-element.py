class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        int count = 0
        for (int i = 0; i < len(nums); i += 1){
            if (nums[i] != val){
                nums[count] = nums[i];
                count += 1;
            }
        }
        return count;