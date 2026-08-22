class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // init
        int result = 0;

        // use XOR to cancel out duplicate numbers
        for (int i = 0; i < nums.size(); i++) {
            result ^= nums[i];
        }

        // return the single number
        return result;
    }
};