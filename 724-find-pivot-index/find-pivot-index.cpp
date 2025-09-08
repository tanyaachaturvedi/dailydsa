class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        
        for(int pivot=0;pivot<n;pivot++){
            int leftsum=0;
            int rightsum=0;
            for(int j=pivot+1;j<n;j++){
                rightsum+=nums[j];
            }
            for(int j=pivot-1;j>=0;j--){
                leftsum+=nums[j];
            }
            if(leftsum==rightsum) return pivot;
        }
        return -1;
    }
};