class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> lesser;
        vector<int> equal;
        vector<int> greater;

        for(int i=0;i<n;i++){
            if(nums[i]<pivot) lesser.push_back(nums[i]);
            else if(nums[i]==pivot) equal.push_back(nums[i]);
            else greater.push_back(nums[i]);
        }
        vector<int> result;
        result.insert(result.end(), lesser.begin(), lesser.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());

return result;
    }
};