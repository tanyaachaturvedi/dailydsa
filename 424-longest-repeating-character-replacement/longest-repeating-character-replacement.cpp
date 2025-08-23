class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r =0;
        int maxi=0;
        int freq=0;
        unordered_map<int,int> mpp;

        while(r<s.size()){
            mpp[s[r]]++;
            freq=max(freq,mpp[s[r]]);

            if((r-l+1) - freq > k){
                mpp[s[l]]--;
                l++;
            }
            maxi= max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};