class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int maxSum=0;
        int sum=nums[0];

        for(int i=1; i<n; i++){
            if(nums[i] <= nums[i-1]){
                maxSum=max(maxSum, sum);
                sum=0;
            }
            sum +=nums[i];
        }
        return max(maxSum, sum);

    }
};