class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int low=0;
        int high=s.size();

        for(char c:s){
            if(c=='I') {
                ans.push_back(low);
                low++;
            }
            else{
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};