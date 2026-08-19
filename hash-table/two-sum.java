class Solution {
    public int[] twoSum(int[] nums, int target) {

        // init
        int len = nums.length;

        // check all the possible combination
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i,j};  //return if found
                }
            }
        }

        // create and return empty list
        return new int[]{};
    }
}