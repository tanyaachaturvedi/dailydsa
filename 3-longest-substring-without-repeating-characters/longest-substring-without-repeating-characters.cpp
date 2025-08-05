class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int l=0;
        int r=0;
        int maxi=0;
        vector<int> hash(256, -1);

        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >=l){
                    l=hash[s[r]] + 1;
                }
            }
            int len=r-l+1;
            maxi=max(maxi,len);
            hash[s[r]] = r;
            r++;
        }
        return maxi;
    }
};