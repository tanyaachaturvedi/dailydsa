class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1;        // Last index of valid nums1 elements
        int j = n - 1;        // Last index of nums2
        int k = m + n - 1;    // Last index of nums1's total capacity

        // Fill nums1 from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If any elements remain in nums2 (nums1’s leftovers are already in place)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};