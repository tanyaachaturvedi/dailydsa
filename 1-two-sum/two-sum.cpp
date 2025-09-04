class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        map<int,int> mpp;

        for(int i=0; i<n;i++){
            int comp=target-nums[i];
            if(mpp.find(comp) != mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[comp]);
            }
            mpp[nums[i]] =i;
        }
        return ans;
    }
};