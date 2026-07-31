class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = std::size(nums);
        int unique = 1;
        vector<int> result;
        result.emplace_back(nums[0]);
        int temp = nums[0];
        for (int i = 1; i < len; i ++){
            if (nums[i] != temp) {
                result.emplace_back(nums[i]);
                int temp = nums[i];
            }
        }
        return result;
    }
};