class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        int count=0;
        for(int i=0; i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[nums[i]-diff] && mpp[nums[i]+diff]){
                count++;
            }
        }
        return count;
    }
};