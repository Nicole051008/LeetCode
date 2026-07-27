class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // answer
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == targe) {
                    return [i,j];
                }
            }
        }
        
    }
};

