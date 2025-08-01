class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int smallest=INT_MAX;
        int secSmallest=INT_MAX;

        if(n<3) return false;

        for(int i=0; i<n; i++){
           if(nums[i]<=smallest){
            smallest= nums[i];
           }
           else if(nums[i] <= secSmallest){
            secSmallest = nums[i];
           }
           else{
            return true;
           }
        }
        return false;
    }
};