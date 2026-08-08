class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // check if num2 are empty
        if (n == 0) {
            return;
        }

        // def pointer
        int cur_pos = n + m -1;
        int num1_pos = m - 1;
        int num2_pos = n - 1;

        for (int i = cur_pos; i >= 0; i --) {
            if num1[num1_pos] >= num2[num2_pos] {
                num1[cur_pos] = num1[num1_pos];
                num1_pos --;
            }

            else {
                 num1[cur_pos] = num2[num2_pos];
                 num2_pos --;
            }
        }
    }
};