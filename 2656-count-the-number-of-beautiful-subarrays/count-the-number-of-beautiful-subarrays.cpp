class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long cnt=0;
        int xr=0;
        map<int,int> mpp;
        mpp[xr]++;

        for(int i=0; i<nums.size(); i++){
            xr= xr^nums[i];
            if(mpp.find(xr) != mpp.end()){
                cnt +=mpp[xr];
            }
            mpp[xr]++;
        }
        return cnt;
    }
};