class Solution {
public:
    int maximum69Number (int num) {
        string nums=to_string(num);
        int ans;

        for(int i=0;i<nums.size(); i++){
            if(nums[i] == '6'){
                nums[i] ='9';
                break;
            }
        }
        ans=stoi(nums);
        return ans;
    }
};