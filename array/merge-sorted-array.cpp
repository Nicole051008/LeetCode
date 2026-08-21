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

        // merge from the end of nums1
        for (int i = cur_pos; i >= 0; i--) {

            // copy nums2 if nums1 is exhausted
            if (nums1_pos < 0) {
                nums1[i] = nums2[nums2_pos];
                nums2_pos--;
            }

            // place the larger element from nums1
            else if (nums1[nums1_pos] >= nums2[nums2_pos]) {
                nums1[i] = nums1[nums1_pos];
                nums1_pos--;
            }

            // place the larger element from nums2
            else {
                nums1[i] = nums2[nums2_pos];
                nums2_pos--;

                // stop if nums2 is exhausted
                if (nums2_pos < 0) {
                    break;
                }
            }
        }
    }
};