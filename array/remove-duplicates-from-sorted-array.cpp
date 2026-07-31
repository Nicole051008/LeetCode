class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int pointer = 1; 
        int temp = nums[0];
        for (int i = 1; i < len; i ++){
            if (nums[i] != temp) {
                nums[pointer] = nums[i];
                pointer ++;
                temp = nums[i];
            }
        }
        return pointer;
    }
};