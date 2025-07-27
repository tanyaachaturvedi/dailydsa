class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int count=0;

        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]) continue;

            int left=i-1;
            while(left >= 0 && nums[left] == nums[i]){
                left--;
            }
            if (left < 0) continue;

            int right=i+1;
            while(right<n && nums[right] == nums[i]){
                right++;
            }
            if(right>=n) continue;

            if(nums[left]<nums[i] && nums[right]<nums[i] || nums[left]>nums[i] && nums[right]>nums[i]){
                count++;
            }
        }
        return count;
    }
};