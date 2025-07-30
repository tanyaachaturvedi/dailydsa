class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int leftProd=1;
        int rightProd=1;

        for(int i=0; i<nums.size(); i++){
            ans[i] = leftProd;
            leftProd *= nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            ans[i] *= rightProd;
            rightProd *= nums[i];
        }
        return ans;
    }
};