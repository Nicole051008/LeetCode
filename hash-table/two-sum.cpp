class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // answer
        for i in nums{
            for j in (nums-1){
                if i+j == target{
                    return [i,j]
                }
            }
        }
        
    }
};

