class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=j;k<n;k++){
                    if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff){
                    count++;}
                }
            }
        }
        return count;
    }
};