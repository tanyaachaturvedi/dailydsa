class NumArray {
    vector<int> preSum;
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            preSum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return preSum[right];
        else{
            int ans=preSum[right]-preSum[left-1];
            return ans;
        }
        return 0;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */