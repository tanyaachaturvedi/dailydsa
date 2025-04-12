class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        unordered_map<int, int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        vector<int> keys;
        for(auto& a:mpp){
            keys.push_back(a.first);
        }

        for(int i=0;i<keys.size();i++){
            for(int j=i+1;j<keys.size();j++){
                for(int k=j+1;k<keys.size();k++){
                    total += mpp[keys[i]] * mpp[keys[j]] * mpp[keys[k]];
                }
            }
        }
        return total;
    }
};