class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // check if num2 are empty
        if (n == 0) {
            return;
        }

        // def pointer
        int cur_pos = n + m - 1;
        int nums1_pos = m - 1;
        int nums2_pos = n - 1;

        for (int i = cur_pos; i >= 0; i --) {

            if (nums1_pos < 0) {
                nums1[i] = nums2[nums2_pos];
                nums2_pos--;
            }

            else if (nums1[nums1_pos] >= nums2[nums2_pos]) {
                nums1[i] = nums1[nums1_pos];
                nums1_pos --;
            }

            else {
                 nums1[i] = nums2[nums2_pos];
                 nums2_pos --;
                 if (nums2_pos < 0) {
                    break;
                 }
            }


        }
    }
};