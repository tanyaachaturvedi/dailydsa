class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt=0;

        for(int i=0; i<n; i++){
            if(nums[i] < target){
                cnt++;
            }
            else {
                break;
            }
        }
        return cnt;
    }
};