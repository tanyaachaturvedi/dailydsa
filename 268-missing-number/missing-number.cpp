class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int N = nums.size();
        for (int num : nums) {
            xor1 ^= num;
        }

        for (int i = 0; i <= N; i++) {
            xor2 ^= i;
        }
        return xor1 ^ xor2;
    }
};
