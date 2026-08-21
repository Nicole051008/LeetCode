class Solution {
    public int removeElement(int[] nums, int val) {

        // init
        int count = 0;

        // move valid elements to the front
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[count] = nums[i];
                count++;
            }
        }

        // return the number of valid elements
        return count;
    }
}