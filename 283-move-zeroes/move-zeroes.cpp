class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;

        while(r<n){
            if(nums[r] != 0){
                swap(nums[l],nums[r]);
                r++;
                l++;
            }
            else r++;
        }
        return;
    }
};