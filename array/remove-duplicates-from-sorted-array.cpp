class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = std::size(nums);
        int unique = 1;
        int pointer = 1; 
        int temp = nums[1];
        for (int i = 1; i < len; i ++){
            if (nums[i] != temp) {
                nums[pointer] = nums[i];
                pointer ++;
                int temp = nums[i];
            }
        }
        return ;
    }
};