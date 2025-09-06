class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int total =0;

        for(int i=0;i<n;i++){
            nums[i]+=total;
            total=nums[i];
        }
        return nums;
    }
};