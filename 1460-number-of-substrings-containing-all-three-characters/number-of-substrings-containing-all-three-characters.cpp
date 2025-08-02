class Solution {
public:
    int numberOfSubstrings(string s) {
        //sliding window
        int left=0;
        int total =0;
        vector<int> ans(3,0);

        for(int i=0; i<s.size(); i++){
            ans[s[i]  - 'a']++;

            while(ans[0] >> 0 && ans[1] >> 0 && ans[2] >> 0){
                ans[s[left] - 'a']--;
                left++;
            }
            total += left;
        }
        return total;
    }
};