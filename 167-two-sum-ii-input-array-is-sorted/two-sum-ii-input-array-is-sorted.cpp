class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans;
        map<int,int> mpp;

        for(int i=0; i<n;i++){
            int comp = target-numbers[i];
            if(mpp.find(comp) != mpp.end()){
                ans.push_back(mpp[comp] +1);
                ans.push_back(i+1);
            }
            mpp[numbers[i]] = i;
        }
        return ans;
    }
};